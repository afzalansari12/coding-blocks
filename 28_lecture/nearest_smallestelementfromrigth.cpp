#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
vector<int> f(int a[], int n){
    stack<int> s;
    vector<int> ans;
 for(int i = n- 1; i<= 0; i--){
      while(!s.empty() and a[s.top()] >= a[i]){
        s.pop();
      }

      if(s.empty()){
       ans.push_back(n);

      }else{
        ans.push_back(s.top());
      }
      s.push(i);
 }

 reverse(ans.begin(), ans.end());
   return ans;
}

int main(){
    int a[] = {5,3,6,7,2,1,4};
    int n = sizeof(a)/sizeof(int);

    vector<int> ans = f(a,n);
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }

    cout << endl;
    return 0 ; 
    
}