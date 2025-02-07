#include<iostream>
#include<vector>
using namespace std;

bool dfs(int u, const vector<vector<int> >& adj , vector<bool > & vis , vector <bool>& stakestate){
    vis[u] = true ;
    stackstate[u] = true ;
    for(int v : adj[u]){
        if(!vis[v]){
            if(dfs(v, adj , vis , stackstate)){
                return true;
            }
            else{
                if(stackstate[v]){
                    return true ;

                }
            }
        }
    }
    stackstate[u] =  true ;
    return false ;
}


int main() {
    int n , m;
    cin >> n >> m;
    vector<vector<int>  > adj(n);
    for(int i = 0; i < m; i++){

        int u , v ;
        cin >> u >> v;
        adj[u].push_back(v);
        
    }
    bool flag = false;
    vector<bool > vis(n , false);
    vector<bool > stackstate(n , true);
    for(int i = 0; i < n ;i++){
        if(!vis[i]){
            if(dfs(i , adj , vis ,stackstate)){

                flag = true;
                break;

            }
        }
    }
    if(flag){
        cout << " directed cycle found" << endl;

    }else{
        cout << " not directed cycle found " << endl;
    }
    return 0;
}