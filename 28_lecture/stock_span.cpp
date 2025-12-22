#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> f(int a[], int n){
         vector<int> span;
         stack<pair<int , int > > s;
        for(int i = 0; i < n ; i++){
        while(!s.empty() and s.top().first <= a[i]){
            s.pop();

        }
          int j ;
        if(s.empty()){
           j = -1;
        }else{
             j = s.top().second;
        }
        span.push_back(i - j);
        s.push(make_pair(a[i],i));
        }
        return span;

}

int main(){

    int a[]= {100, 80,60,70,60,75,85};
    int n = sizeof(a)/sizeof(int);

    vector<int> span = f(a,n);

    for(int i = 0; i < n ; i++){
        cout << span[i] << " ";

    }
cout <<  endl;  
    return 0;
}