#include<iostream>
#include<stack>
#include<algorithm>
#include<vector>

using namespace std;
vector<int> fright(int a[], int n){
    stack<int> s;
    vector<int> ans;
 for(int i = n - 1; i >= 0; i--){
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


vector<int> fleft(int a[], int n){
    stack<int> s;
    vector<int> ans;
 for(int i = 0; i < n; i++){
      while(!s.empty() and a[s.top()] >= a[i]){
        s.pop();
      }

      if(s.empty()){
       ans.push_back(-1);

      }else{
        ans.push_back(s.top());
      }
      s.push(i);
 }


   return ans;
}


int main(){
int h[] = {2,1,5,6,2,3};
int n = sizeof(h)/sizeof(int);
vector<int> nsr = fright(h,n);
vector<int> nsl = fleft(h,n);

int maxsofar = 0;

for(int i = 0; i < n ; i++){

    int bestwidth = (nsr[i]-nsl[i]) - 1;
    int bestarea = h[i]*bestwidth;
     cout << bestwidth << "*" << h[i] << " = " << bestarea << endl;
  maxsofar = max(maxsofar, bestarea);

}
 cout << maxsofar << endl;

return 0;
}