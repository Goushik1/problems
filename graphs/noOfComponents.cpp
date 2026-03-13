#include <iostream>
#include <vector>
using namespace std;

namespace DFS_ConnectedComponents {

void dfs(int node, vector<vector<int>> &adj, vector<bool> &visited){
    visited[node] = true;
    for(int neigh : adj[node]){
        if(!visited[neigh])
            dfs(neigh, adj, visited);
    }
}

int countComponents(int V, vector<vector<int>> &adj){
    vector<bool> visited(V+1,false);
    int components = 0;
    for(int i=1;i<=V;i++){
        if(!visited[i]){
            dfs(i,adj,visited);
            components++;
        }
    }
    return components;
}
}

int main(){

    int V = 5;
    vector<vector<int>> adj(V+1);
    adj[1].push_back(2);
    adj[2].push_back(1);
    adj[2].push_back(3);
    adj[3].push_back(2);
    adj[4].push_back(5);
    adj[5].push_back(4);
    cout<<"Connected Components: "
        <<DFS_ConnectedComponents::countComponents(V,adj);
}