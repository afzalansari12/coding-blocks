#include<iostream>
#include<vector>
using namespace std;
int cnt2 = 0;
int cnt1 = 0;

int ftopdown(int n, vector<int>& dp){
    cnt2++;
    if(dp[n] != -1){
        return dp[n];

    }
    if(n ==0 || n == 1){
        return dp[n] = n ;
    }
    return dp[n] = ftopdown(n - 1, dp) + ftopdown(n - 2, dp);
}

int fbottomup(int n){
    vector<int> dp(n+ 1);

    dp[0]= 0;
    dp[1]= 1;
    for(int i = 2; i <= n ; i++){
        dp[i] = dp[i - 1] + dp[ i - 2];
    }
    return dp[n];
}

  int f(int n){
    cnt1++;
   
    if(n == 0 || n == 1){
        return  n ;
    }
    return f(n - 1) + f(n - 2);
}
int main(){

    int n = 30;
    cout << f(n) << endl;

    vector<int> dp(n +1, -1);

    cout << ftopdown(n,dp) << endl;

    cout << cnt1 << endl;

    cout << cnt2 << endl;

    return 0;
}