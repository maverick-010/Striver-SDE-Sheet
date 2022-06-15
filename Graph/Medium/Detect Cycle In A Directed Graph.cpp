#include<bits/stdc++.h>
void topsort(int node,unordered_map<int,vector<int>>&adj,unordered_map<int,bool>&visited,vector<int>&ans){
    visited[node]=true;
    for(auto i:adj[node]){
        if(!visited[i]){
            topsort(i,adj,visited,ans);
        }
    }
    ans.push_back(node);
}
int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
   unordered_map<int,vector<int>>adj;
    for(int i=0;i<edges.size();i++){
        int u=edges[i].first;
        int v=edges[i].second;
        adj[u].push_back(v);
        if(u==v){
            return 1;
        }
    }
    vector<int>ans;
    unordered_map<int,bool>visited;
    for(int i=1;i<=n;i++){
        if(!visited[i]){
            topsort(i,adj,visited,ans);
        }
    }
    reverse(ans.begin(),ans.end());
    
    //mapping with index
    unordered_map<int,int>order;
    for(int i=0;i<ans.size();i++){
        order[ans[i]]=i;
    }
    for(int i=0;i<edges.size();i++){
        int u=edges[i].first;
        int v=edges[i].second;
        if(order[u]>order[v]){
            return 1;
        }
    }
    return 0;
}
