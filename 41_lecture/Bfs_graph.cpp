#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main(){
    int n , e;
    int a;
    int b;
    cout << "enter no. vertices";
    cin >> n;
      cout << " enter the no. of edges ";
    cin >> e;
     vector<int> adjlist[n];

        for(int i = 1; i <= e; i++){

        cout << "enter the end points of edge ";
        cin >> a;
        cin >> b;

        adjlist[a].push_back(b);
        adjlist[b].push_back(a);

     }
        for(int i = 0; i < n ; i++){

        cout << i << ":";

        for(int j = 0 ;j < adjlist[i].size(); j++){

        cout << adjlist[i][j] ;

        }
        cout << endl;
        }

        // cout << "BFS order is :" << endl;

        queue<int> q;
        vector<int> status(n,-1);
           q.push(3);
           status[3] = 0;

        while(!q.empty()){

            int x = q.front();
            
             q.pop();

            //cout << x << ",";

         for(int j = 0; j < adjlist[x].size(); j++){
                   int y = adjlist[x][j];
                   if(status[y] == -1){
                    status[y] = status[x] +1;
                     q.push(y);
                   }

         }
            
 }

 for(int i = 0 ; i< n ; i++){
     cout << status[i] << endl;
 }


     
return 0;
}