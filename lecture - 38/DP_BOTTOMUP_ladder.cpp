#include<iostream>
#include<vector>
using namespace std;

int fbottomup(int n,int k){
vector<int> dp(n + 1);
dp[0] = 1;

for (int i = 1; i <= n; i++){
    int cnt = 0;
    for (int j = 1; j <= k ; j++){
      if(i - j >= 0){
        cnt += dp[i - j];
      }
    }
    dp[i] = cnt;
}
return dp[n];
}
int f(int n, int k){
    if(n == 0){
        return 1;
    }
}
int cnt = 0;
for(int j = 1; j <= k ; j++){
    if(n - j >= 0){
        cnt = cnt + f(n - j, k);

    }
    
}
return cnt ;
    
int main(){
    int n , k;
    n = 4;
    k = 3;

cout << f(n,k) << endl;
cout << fbottomup(n,k) << endl;


    return 0;
}