// #include<iostream>
// #include<set>
// #include<vector>

// using namespace std;

// const int INF = 1e9;
// int main(){
//    int n, m;
//     cin >> n >> m;
//     vector<vector<pair <int , int >> > adj(n);
//     for(int i = 0; i < m; i++){

//         int u , v , w ;
//         cin >> u >> v >> w;
//         adj[u].push_back({v, w});
//         adj[v].push_back({u , w});
//     }
//     int s = 0;

//     vector<int> d(n ,INF);
//     d[s] = 0;

//     vector<bool> e(n, false);
//     set<pair<int, int > > minheap;

//     // for(int i = 0; i < n; i++){
//     // minheap.insert({d[i], i});

//     // }
//     minheap.insert({d[s], s});
//     while(!minheap.empty()){
         
//          auto [du, u ] = *minheap.begin();
//          minheap.erase(minheap.begin());
//         //   minheap.erase({du, u});

//         // pair<int , int > ; 
//         for(int [v,w]: adj[u]){
//             if(!e[v] and d[v] > du + w){
//                 d[v] = du + w;
//                 minheap.insert({d[v], v});

//             }
//         }
//         e[u] = true;
//     }
//     for(int i = 0; i < n ; i++){
//         cout <<" d[" << i << "] = " << d[i] << endl;
//     }

//  cout << endl;

// return 0;
// }


#include <iostream>
#include <set>
#include <vector>

using namespace std;

const int INF = 1e9;
vector<int> getpath( int u ,vector<int> & p){
    vector< int > path = {u};
    while(p[u] != - 1){
        u = p [u];
        path.push_back(u);     
    }
    reverse(path.begin(), path.end());
    return path;

}

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<vector<pair<int, int>> > adj(n);
    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    int s = 0; // Source vertex

    vector<int> d(n, INF);
    d[s] = 0;

    vector<bool> e(n, false);
    set<pair<int, int>> minheap;
    
    minheap.insert({d[s], s});
    vect

    while (!minheap.empty()) {
        auto [du, u] = *minheap.begin();
        minheap.erase(minheap.begin());

        for (auto [v, w] : adj[u]) {
            if (!e[v] && d[v] > du + w) {
                minheap.erase({d[v], v});  // Remove old pair
                d[v] = du + w;
                minheap.insert({d[v], v}); // Insert updated value
            }
        }
        e[u] = true;
    }

    for (int i = 0; i < n; i++) {
        cout << "d[" << i << "] = " << d[i] << endl;
    }
    cout << endl;

    for(int i = 0; i < n ; i++){
        cout << 
    }

    return 0;
}
