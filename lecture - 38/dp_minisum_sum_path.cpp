#include<iostream>
#include<vector>
using namespace std;
fbottomup(const vector<vector< int >>&grid , int m, int n ){
vector<vector<int>> dp(m,vector<int>(n));
for(int i = m- 1; i >= 0; i--){
    for(int j = n - 1; j >=0; j--){
if(i == m- 1 and j == n - 1){
    dp[i][j] = grid[i][j];
}else if(i == m - 1){
    dp[i][j] = grid[i][j] + dp[i][j +1];
}else if(i == m - 1){
    dp[i][j] = grid[i][j] + dp[i + 1][j];
}else {
    dp[i][j] = grid[i][j] + min( dp[i][j + 1], dp[i + 1][1]);
}
    }
    
}
return dp[0][0];
}
fspace_optimisebottomup(const vector<int>&grid , int m, int n ){
vector<int> dp(n);
for(int i = m- 1; i >= 0; i--){
    for(int j = n - 1; j >=0; j--){
if(i == m- 1 and j == n - 1){
    dp[j] = grid[i][j];
}else if(i == m - 1){
    dp[j] = grid[i][j] + dp[j +1];
}else if(i == m - 1){
    dp[j] = grid[i][j] + dp[j];
}else {
    dp[i][j] = grid[i][j] + min( dp[j + 1], dp[j]);
}
    }  
    for(int i = 1; i < n ; i++){
        for(int j = 1; j < m ; j++){
          cout << dp[i][j] ;
             
        }
        cout << endl;
    }  
    cout << endl;
    int i = 0 , j = 0;
    while( !(i == m - 1 and  j == n - 1)){
        cout << i  << " " << j << endl;
    }
    
}
return dp[0];
}
int main(){
    int m , n;
    vector<vector<int>> grid = {
        {1, 3, 1},
        {1, 5, 1},
        {4, 2, 1}
    };
    cout << fbottomup(grid , m ,n) << endl;
   cout << fspace_optimisebottomup(grid , m ,n) << endl;
    return 0;
}