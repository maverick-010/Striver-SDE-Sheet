#include<bits/stdc++.h>
void topsort(int node,unordered_map<int,vector<int>>&adjList,vector<bool>&visited,stack<int>&s){
    visited[node]=true;
    for(auto i:adjList[node]){
        if(!visited[i]){
        topsort(i,adjList,visited,s);
        }
    }
    s.push(node);
}
vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    unordered_map<int,vector<int>>adjList;
    vector<bool>visited(v);
    stack<int>s;
    vector<int>ans;
    for(int i=0;i<e;i++){
        int u=edges[i][0];
        int v=edges[i][1];
        adjList[u].push_back(v);
    }
    for(int i=0;i<v;i++){
        if(!visited[i]){
            topsort(i,adjList,visited,s);
        }
    }
    while(!s.empty()){
        int onTop=s.top();
        ans.push_back(onTop);
        s.pop();
    }
    return ans;
}
