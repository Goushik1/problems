#include <iostream>
#include <vector>
#include <queue>
using namespace std;

namespace Kahn_Topological {

void topoSort(int V, vector<vector<int>> &adj){

    vector<int> indegree(V+1,0);

    for(int i=1;i<=V;i++){
        for(int neigh : adj[i])
            indegree[neigh]++;
    }

    queue<int> q;

    for(int i=1;i<=V;i++){
        if(indegree[i]==0)
            q.push(i);
    }

    cout<<"Topological Order (Kahn BFS): ";

    while(!q.empty()){

        int node = q.front();
        q.pop();

        cout<<node<<" ";

        for(int neigh : adj[node]){

            indegree[neigh]--;

            if(indegree[neigh]==0)
                q.push(neigh);
        }
    }
}

}

int main(){

    int V = 4;
    vector<vector<int>> adj(V+1);

    adj[1].push_back(2);
    adj[1].push_back(3);
    adj[3].push_back(4);

    Kahn_Topological::topoSort(V, adj);
}