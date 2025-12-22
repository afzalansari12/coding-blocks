

#include <iostream>
#include <queue>
#include <vector>

using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    
    vector<vector<pair<int, int>> > adj(n);
    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        // adj[u].push_back({v, w});
        // adj[v].push_back({u, w});

        edges.push_back(edge(v,u,w));
    }

    int s = 0;

    vector<int> prev(n, INF);

    prev[s] =0;
    for(int i = 0; i < n ; i++){
      vector<int> cur = prev;
      for(auto e : edges){
        
      }

    }
    

}