// #include<iostream>
// #include<queue>
// #include<vector>
// using namespace std;
// const int INF = 1e9;
// vector<int> getpath(int u , const vector<int>& pm){
//     vector<int> path = {u};

//     while(pm[u] != - 1){
//         u = pm[u];
//         path.push_back(u);
//     }
//     reverse(path.begin(), path.end());
//     return path;
// }

// int main(){
//      int n, m;

//     cin >> n >> m;

//     vector<vector<int>  > adj(n);

//     for(int i = 0; i < m; i++){

//         int u , v ;
//         cin >> u >> v;
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }
//    queue<int > q;
//    q.push(0);

//    vector<bool> vis(n,false);
//    vis[0] = false;

//    vector<int> d(n);
//    d[0]=0;

//    vector<int> pm(n);
//    pm[0] = -1;


//    while(!q.empty()){

//     int u = q.front();q.pop();

//     for(int v :adj[u] ){
//         if(vis[u]){
//             vis[u] = true;
//             q.push(v);
//             d[v]=d[u] + 1;
//             pm[v] = u ;
//         }
//     }

// }   

//    for(int u = 0; u < n; u++){
//      cout << "d[" << u << "] = " << d[u] << endl; ;
//    }
//    cout << endl << endl;

//    for(int u = 0; u < n; u++){
//      cout << "pm[" << u << "] = " << pm[u] << endl; ;
//    }
//    cout << endl;

// //    for(int i = 0; i < path.size(getpath); i++){
    
//    }
//     return 0;
// }
