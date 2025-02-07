#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n , m ;
    cin >> n >> m;
    vector<vector<int> > adj(n);
    for(int i = 0; i < n ; i++){
        int u , v ;
        cin >> u >> v ;
        adj[u].push_back(v);

}
vector<int> indegmap(n , 0);
for(int u = 0; u< n ; u++){
    for(int u : adj[u]){
        indegmap[v]++;

    }

}
queue<int> q;
for(int u =0; u < n ; u++){
    if(indegmap[u]==0){
        q.push(u);
    }
}
while(!q.empty()){
    int u = q.front(); q.pop();
    ans.push_back(u);
    for(int v : adj[u]){
        indegmap[v]--;
        if(indegmap[v]==0){
            q.push(v);
        }
    }
}
for(int i = 0; i < n ; i++)
{
    cout << ans[i] << " ";
}
cout << endl;
        return 0;
}