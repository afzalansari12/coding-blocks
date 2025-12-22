#include<iostream>
#include<vector>
using namespace std;
int f(int n){
    if(n == 1){
        return 0;

    }

    int op1 = f(n - 1);
    int op2 = INT_MAX;
}
intftopdown(int n, vector<int>& dp){
    cnt2++;
    if(dp[n] != -1){
        return dp[n];
    }
    if(n == 1){
        return dp[n] = 0;
    }
}
int fbottomup(int n){
    vector<int> dp(n+1);
    dp[1] = 0; 
    for(int i = 2; i <= n; i++){
       int op1 = dp[i - 1];
       int op2 = INT_MAX;

       if(i%2 == 0){
        op2 = dp[ i/2];
       }
       int op3 = INT_MAX;
       if(i%3){
       int op3 = dp[i/3];
    }
    dp[i] =1 + min(op1, min(op2,op3));

    }
   return dp[n];
}

int main(){
    int n = 10;
    cout << f(n) << endl;
    vector<int> dp(n+1, -1);
    cout << ftopdown(n, dp) << endl;
        return 0;
}