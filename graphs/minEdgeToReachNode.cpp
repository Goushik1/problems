#include <iostream>
#include <vector>
#include <deque>
using namespace std;

namespace EdgeReversal {

int minEdgeReversal(int n, vector<pair<int,int>> &edges){
    vector<vector<pair<int,int>>> adj(n+1);
    for(auto e : edges){
        int u = e.first;
        int v = e.second;
        adj[u].push_back({v,0}); 
        adj[v].push_back({u,1}); 
    }

    deque<int> dq;
    vector<int> dist(n+1,1e9);

    dq.push_front(1);
    dist[1] = 0;

    while(!dq.empty()){
        int node = dq.front();
        dq.pop_front();
        for(auto it : adj[node]){
            int next = it.first;
            int weight = it.second;
            if(dist[node] + weight < dist[next]){
                dist[next] = dist[node] + weight;
                if(weight == 0)
                    dq.push_front(next);
                else
                    dq.push_back(next);
            }
        }
    }
    return dist[n];
}

}

int main(){
    int n = 4;
    vector<pair<int,int>> edges = {
        {1,2},
        {3,2},
        {3,4}
    };
    cout << "Minimum Edge Reversals: "
         << EdgeReversal::minEdgeReversal(n, edges);
}