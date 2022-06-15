#include<unordered_map> 
#include<list>
#include<queue> 
bool isCyclicDFS(int node,int parent,  unordered_map<int ,bool> &visited, unordered_map<int,list<int>> &adj) {  
    //first marke visited node  
    visited[node]=true;  
    //take it out neighbour node 
    for(auto neighbourNode:adj[node]){
        //agar koi node is not visited then 
        if(!visited[neighbourNode]) {
            //hum aga call kar deta tha      
            //parent is a current node   
            bool cycleDetected= isCyclicDFS(neighbourNode,node,visited,adj);  
            if(cycleDetected){  
                return true;     
            }   
        } else if(neighbourNode!=parent){
            //cycle is present   
            return true;       
        }      
    }     
    return false; 
}

string cycleDetection (vector<vector<int>>& edges, int n, int m) {       // create adjacent list  
    unordered_map<int,list<int>> adj; 
    for(int i=0 ; i<m ; i++)    {    
        //first vertex and second vertex nikalo    
        int u=edges[i][0];     
        int v=edges[i][1];     
        //as it is undirected graph  
        adj[u].push_back(v);   
        adj[v].push_back(u); 
    }   
    //to handle disconnected component 
    
    unordered_map<int ,bool> visited; 
    for(int i=0 ; i<n ; i++)    {    
        //if node is not visited  then call cyclebfs   
        if(!visited[i])
        {      
            bool ans = isCyclicDFS(i,-1,visited,adj);
            //if ans is true then return string "yes"  
            if(ans ==1)   {
                return "Yes";  
            }       
        }   
    
    }    return "No";
}
