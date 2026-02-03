#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n , e;
    int a;
    int b;
      cout <<"enter no. vertices";
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

     
return 0;
}