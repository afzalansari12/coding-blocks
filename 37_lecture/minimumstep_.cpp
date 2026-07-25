#include<iostream>
#include<vector>
#include<climits>

using namespace std;
// int f(int n){
//     if(n == 1){
//         return 0;

//     }

//     int op1 = f(n - 1);
//     int op2 = INT_MAX;
// }
// int cnt2 = 0;


// int ftopdown(int n, vector<int>& dp){
//     cnt2++;
//     if(dp[n] != -1){
//         return dp[n];
//     }
//     if(n == 1){
//         return dp[n] = 0;
//     }
//     int opt1 = f(n-1,dp[n]);

//     int opt2 = INT_MAX;
//     if(n%2==0){
//         opt2 = f(n/2,dp[n]);

//     }
//      int opt2 = INT_MAX;
//       if(n%3 == 0){
//         opt2 = f(n/3,dp[n]);

//     }
//     return dp[n] = 1+ min(opt1,min(opt2,opt3));
// }

 int fbottomup(int n){
    vector<int> dp(n+1);
    dp[1] = 0; 
//    int opt3, opt2,opt1;
 for(int i = 2; i <= n; i++){

        int opt1 = dp[i - 1];

        int opt2 = INT_MAX;

       if(i%2 == 0){
        opt2 = dp[i/2];
       }
        int opt3 = INT_MAX;

       if(i%3 == 0){
        opt3 = dp[i/3];
    }
    dp[i] = 1 + min(opt1, min(opt2,opt3));

    }
   return dp[n];
}

int main(){
    int n = 10;

    // cout << f(n) << endl;

    // vector<int> dp(n+1, -1);

    // cout << ftopdown(n, dp) << endl;

    cout << fbottomup(n) << endl;
        return 0;
}