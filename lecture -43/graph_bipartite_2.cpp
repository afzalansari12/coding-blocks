#include<iostream>
#include<vector>
#include<queue>
using namespace std;
bool dfs(int u , int c, const vector<vector<int> >& adj, vector<int >& cm){
    cm[u] = c;
    for(int v: adj[u] == false){
        return false;
    }

}
else {
    if(cm[u] == cm[v]){
        return false;

    }
}
int main() {
    int n , m;
    cin >> n >> m;
    vector<vector<int>  > adj(n);
    for(int i = 0; i < m; i++){

        int u , v ;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector <int> cm(n , - 1);
    for(int i = 0 ; i < n; i++){
         if(cm[i] == - 1){
            if(dfs(i, 0, adj, cm)== false){
                return false ;
            }
         }
    }
    if(dfs(0,0,adj,cm)){
        cout << "bipartited" << endl;
    }else{
        cout << " not bipartited" << endl;
    }


    return 0;
}