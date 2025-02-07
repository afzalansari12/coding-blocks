#include<iostream>
#include<vector>
#include<queue>


using namespace std;
bool isBipartite(vector<vector<int>>& adj, int n) {
    vector<int> color(n, -1); // -1 means uncolored
    queue<int> q;

    // Check all components of the graph
    for (int start = 0; start < n; start++) {
        if (color[start] == -1) { // Not visited
            q.push(start);
            color[start] = 0; // Start coloring with 0

            while (!q.empty()) {
                int node = q.front();
                q.pop();

                for (int neighbor : adj[node]) {
                    if (color[neighbor] == -1) { // If uncolored, color with opposite color
                        color[neighbor] = 1 - color[node];
                        q.push(neighbor);
                    } else if (color[neighbor] == color[node]) {
                        return false; // If same color as parent, not bipartite
                    }
                }
            }
        }
    }
    return true;
}


int main() {
    int n , m;
    cin >> n >> m;
    

    

    return 0;
}