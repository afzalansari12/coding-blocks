
#include<iostream>
#include<vector>
using namespace std;
bool dfs(int u , int p, const vector<vector<int> >& adj , vector<bool >& vis ){
    vis[u] = true ;
    int (int v : adj[u]){
        if(!vis[v]){
             if(dfs(v,u,adj,vis)){
                return true ;
             }
        }else{
            if(v != p){
                return true;
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
    vector<bool> vis(n , false);
 bool flag  = false ;
 for(int i = 0; i < n; i++){
    if(!vis[i]){
        if(dfs( i , - 1,adj, vis)){

            flag = true;
            break; 
        }
    }
 }

    
return 0;
}