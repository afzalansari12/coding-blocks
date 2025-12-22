#include<iostream>

#include<vector>

using namespace std;

void dfs(int u, const vector<vector<int> > adj, vector<bool>& vis){
    vis[u] = true;
    cout << u << " ";
    
   for(int v: adj[u]){
    if(!vis[v]){
        dfs(v,adj,vis);
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
    vector<bool> vis(n,false);
    dfs(s,adj,vis);
return 0;
}