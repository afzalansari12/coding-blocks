#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main(){
    //   vector<vector<int>>vv(10,vector<int>(5));
    //   for(int i = 0;  i < vv.size();i++){
    //     for(int j = 0; j< vv[i].size();j++){
    //         cout << vv[i][j] << " ";
    //     // cout << "\n";
    //     }
    //     cout << "\n";
    //   }
        
// pairs is used to store pair of value 
    //   pair<int, string>p;
    //    p = {101,"ansh"};
    //    p = make_pair(101,"ansh");
    //   cout << p.first<< "," << "\n";
    //   cout << p.second;

vector<pair<int,string>> vp;

vp.push_back({1 ,"aarav"});
vp.push_back({2 ,"aditya"});
vp.push_back({3 ,"amit"});
vp.push_back({4 , "akhil"});
vp.push_back({5 ,"bharat"});

for(int i  = 0; i < vp.size(); i++){
      pair<int, string> p = vp[i];
    cout << p.first << ","  << p.second << "\n";
}

    queue<pair<int,int>> q;

    q.push({0,5});
    q.push({1,4});
    q.push({2,3});
    q.push({3,2});
    q.push({4,1});
    q.push({5,0});

    while(!q.empty()){

        pair<int,int> p = q.front();  // declare properly
        q.pop();

        cout << p.first << "," << p.second << endl;
    }

return 0;
}

