#include <iostream>
#include <vector>
#include <stack>
using namespace std;

namespace DFS_Topological {

void dfs(int node, vector<vector<int>> &adj, vector<bool> &visited, stack<int> &st){
    visited[node] = true;

    for(int neigh : adj[node]){
        if(!visited[neigh])
            dfs(neigh, adj, visited, st);
    }

    st.push(node);
}

void topoSort(int V, vector<vector<int>> &adj){

    vector<bool> visited(V+1,false);
    stack<int> st;

    for(int i=1;i<=V;i++){
        if(!visited[i])
            dfs(i, adj, visited, st);
    }

    cout<<"Topological Order (DFS): ";

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}

}

int main(){

    int V = 4;
    vector<vector<int>> adj(V+1);

    adj[1].push_back(2);
    adj[1].push_back(3);
    adj[3].push_back(4);

    DFS_Topological::topoSort(V, adj);
}