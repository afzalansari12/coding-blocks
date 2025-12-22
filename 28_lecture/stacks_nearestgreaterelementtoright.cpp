
#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
vector<int> f(int a[], int n){
    stack<int> s;
    vector<int> ans;
 for(int i = 0; i <= n- 1; i++){
      while(!s.empty() and s.top() <= a[i]){
        s.pop();
      }

      if(s.empty()){
       ans.push_back(-1);

      }else{
        ans.push_back(s.top());
      }
      s.push(a[i]);
 }

//  reverse(ans.begin(), ans.end());
   return ans;
}

int main(){
    int a[] = {5,2,0,4,1,3,6};
    int n = sizeof(a)/sizeof(int);

    vector<int> ans = f(a,n);
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }

    cout << endl;
    return 0 ; 
    
}

    

