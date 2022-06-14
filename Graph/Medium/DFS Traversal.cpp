#include<bits/stdc++.h>
using namespace std;
void mapAdjlist(map<int,set<int>>&adjList,vector<vector<int>> &edges)
{
    int n=edges.size();
    for(int i=0;i<n;i++){
        int u=edges[i][0];
        int v=edges[i][1];
        adjList[u].insert(v);
        adjList[v].insert(u);
    }
}

void dfs(map<int,set<int>>&adjList,map<int,int>&visited,int node,vector<int>&v,stack<int>&s,vector<int>&temp){
    if(visited[node]){
        return;
    }
    s.push(node);
    visited[node]=1;

        int topnode=s.top();
           v.push_back(topnode);
           temp.push_back(topnode);
            
        for(auto i:adjList[topnode]){
            if(visited[i]==0){
            dfs(adjList,visited,i,v,s,temp);
            }
        }
    
}

vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
  map<int,set<int>>adjList;
    mapAdjlist(adjList,edges);
    map<int,int>visited;
    vector<int>v;
    stack<int>s;
    vector<vector<int>>ans;
    
    for(int i=0;i<V;i++){
        if(visited[i]==0){
            vector<int>temp;
    dfs(adjList,visited,i,v,s,temp);
            ans.push_back(temp);
        }
    }
 
    return ans;
   
}
