#include<iostream>

#include<vector>

using namespace std;

void bfs(int s, const vector<vector<int> >& adj){
    int n = adj.size();
    vector<bool> vis(n, false);
    queue<int> q;
    q.push(s);
    vis[s] = true ;
    while(!q.empty()){
        int u = q.front():
        q.pop();

        cout << u << " ";
        for(int v : adj[u]){
            if(!vis[v]){
                vis[v] = true;
                q.push(v);
            }
        }
    }

}
int main(){
    int n , m ;
    cin >> n >> m;
    vector<vector<int> > adj(n);
    for(int i = 0; i < m; i++){
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int s = 0;
    // vector<bool> vis(n,false);
    bfs(s,adj);
return 0;
}