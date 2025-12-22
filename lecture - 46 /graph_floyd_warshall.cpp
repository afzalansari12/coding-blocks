#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n , m ;
    cin >> n >> m;

    vector<edges> edges;
  
    for(int i = 0; i < m ; i++){
        int u, v, w;
        cin >> u >> v >> w;
        edges.push_push(edge(u,v,w));
        edges.push_push(edge(v,u,w));
    }

   vector<vector<int> > dp(n+ 1, vector<int>(n+ 1));
   for(int i = 1; i <= n ; i++){
    dp[i][j] = 0;
   }


   for (auto e : edges){
    int i = e.u; int j = e.v; int w = e.w;
        dp[i][j] = w;
   }

for(int k = 1; k <=n k++){
    for(int i = 1; i<=n ; i++){
        for(int j =  1; j <= n ;j++){
            dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j]);
        }
    }
}

for(int i = 1; i <= n ; i++){
    for(int j = 1; j <= n ; j++){
        cout << dp[i][j] << " ";
    }
    cout << endl;
}
cout << endl;
return 0;
}