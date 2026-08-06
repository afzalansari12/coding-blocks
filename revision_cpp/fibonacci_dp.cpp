#include<iostream>
#include<vector>
#include<cstring>

using namespace std;

int fibonacci_dp(int n ,vector<int> &dp){
    if(n ==0||n==1){
        return dp[n] =n ;
    }
    if(dp[n]!= -1){
     return dp[n];
    }

    return dp[n] = fibonacci_dp(n-1,dp)+fibonacci_dp(n-2,dp);
}
int main(){
    int n ;
    cin >> n;

   vector<int> dp(n+1,-1);
    
    cout << fibonacci_dp(n,dp);
return 0;
}
