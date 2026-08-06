// #include<iostream>
// using namespace std;
// int f(int a[],int n ){
//     if(n==0){
//      return 0;
//     }
//     int maxprofit = 0;
//     for(int i = 1; i <=n ; i++){
//         int profit = a[i-1] + f(a,n -i);
//         maxprofit = max(profit,maxprofit);
//     }
//     return maxprofit;
// }

// int main(){
//     int n;
//     cin >> n;
//     int a[n];
//     for(int i = 0; i< n; i++){
//         cin >>a[i];
//     }
//  cout << f(a,n);
// return 0;
// }



// #include<iostream>
// #include<vector>

// using namespace std;
// int ftopdown(int a[], vector<int>& dp,int n){
//     if(n == 0){
//         return dp[n] = 0;
//     }
//     if(dp[n]!=-1){
//         return dp[n];
//     }

//      int maxprofit = 0;
//     for(int i = 1; i <=n ; i++){
//         int profit = a[i-1] + ftopdown(a,dp, n -i);
//         maxprofit = max(profit,maxprofit);
//     }
//     return dp[n] = maxprofit;
// }
// int main(){
//     int n;
//     cin >> n;
//     int a[n];
//  for(int i = 0; i < n; i++){
//         cin >> a[i];
// }
// vector<int> dp(n+1,-1);

// cout << ftopdown(a ,dp,n);

// return 0;
// }

#include<iostream>
#include<vector>

using namespace std;
int fbottomup(int a[],int n){
  vector<int> dp(n+1,-1);

  dp[0] = 0;

    for(int i = 1; i <=n;i++){
        int maxprofit = 0;
        for(int j = 1; j <= i;j++ ){
         maxprofit = max(maxprofit, a[j-1] + dp[i - j]);
        }

        dp[i] = maxprofit;
    }

   return dp[n];
}
int main(){
    int n;
    cin >> n;
    int a[n];
 for(int i = 0; i < n; i++){
        cin >> a[i];
}

cout << fbottomup(a ,dp,n);

return 0;
}