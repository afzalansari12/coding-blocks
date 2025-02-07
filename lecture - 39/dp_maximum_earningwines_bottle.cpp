#include<iostream>
#include<vector>
using namespace std;

int f(const  vector<int>&p int i , int j, int y){
    if(i == j){
        return y*p[i];
    }
      
return max(y*p[i] + f(p,i +1,j , y+1),y*p[j] + f(p,i ,j - 1 , y+1));

}



int ftopdown(const  vector<int>&p int i , int j, int y,vector<vector<vector<int>>>& dp){
    if(i == j){
        return dp[i][j][y] =   y*p[i];
    }
      
return  dp[i][j][y] =  x(y*p[i] + f(p,i +1,j , y+1),y*p[j] + f(p,i ,j - 1 , y+1));

}
int fstate_optimised(const  vector<int>&p int i , int j){
    int y = p.size() - j + 1;
     if(i == j){
        return y*p[i];
    }
      
return max(y*p[i] + f(p,i +1,j),y*p[j] + f(p,i ,j - 1 ));


}
int fstate_optimisedtopdown(const  vector<int>&p int i , int j ,vector<vector<int>>&dp){
    int y = p.size() - j + 1;
     if(i == j){
        return y*p[i];
    }
      
return max(y*p[i] + f(p,i +1,j),y*p[j] + f(p,i ,j - 1 ));


}
int fstate_optimisedbottomup(const  vector<int>&p ,int n ){
    int y = p.size() - j + 1;
    vector<vector<int>> dp(n,vector<int>(n));

     for(it i = 0; i <n ; i++){
        dp[i][j] = y*p[i];
     }
     for(int i = n -2;i <n; i++){
        for(int j = i +1;j < n ;j++){
            int y =  n - j + 1;
            dp[i][j] = max(y*p[i] + dp[i +1][j],y*p[j] +dp[i][j - 1]);

        }
     }
      
return dp[0][n - 1];


}

int main(){
 vector<int> p = {2,3, 5, 1,4};
 int i = 0 ,n = p.size();
 int j = n - 1, y = 1;
cout << f(p,0,n- 1,1) << endl;
vector<vector<vector<int>>> dp(n, vector<vector<int>>(n,vector<int>(n+1,-1)));
cout << ftopdown(p,0,n- 1,1,dp) << endl;

cout << fstate_optimised(p,0,n- 1) << endl;


return 0;
}