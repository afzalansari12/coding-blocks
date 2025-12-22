#include<iostream>
#include<vector>
using namespace std;
f(int n , vector<int> p ){
    if(n == 0){
        return 0;
    }
    for(int j = 1;j <= n; j++){
      maxsofar = max(maxsofar,p(j - 1 )+ f(n - j,p));
    }
        return maxsofar
}
int fbottomup(int n, const vector<int>& p){
    vector<int> dp[n + 1];
    dp[0]= 0;
   for(int i = 1; i <= n ; i++){
    int maxsofar = 0;
      for(int j = 1; j <= n ; j++){
        maxsofar = max(maxsofar , p [j - 1],+ dp[i - j]);
      }
      dp[i] = maxsofar;
   }
   return dp[n];
}
int main(){
    vector<int> p = {1,5,8,9,10,17,17,20};
    int n = p.size();
    int maxsofar =0;
    cout << f(n,p) << endl;
    cout << fbottomup(n,p) << endl;
return 0;
}