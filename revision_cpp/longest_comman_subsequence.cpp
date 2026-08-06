// #include<iostream>
// using namespace std;
// int f(string s1,string s2,int i, int j,int m ,int n){
//     if(i==m || j == n){
//       return 0;
//     }
//     if(s1[i]==s2[j]){
//         return 1+f(s1,s2,i+1,j+1,m,n);
//     }else{
//         int x = f(s1,s2,i+1,j,m,n);
//         int y = f(s1,s2,i,j+1,m,n);

//         return  max(x,y);
//     }
// }
// int main(){
//     int m ,n;
   
//     string s1;
//     string s2;
//     cin >> s1 >> s2;

//     m = s1.size();
//     n = s2.size();

//     cout << f(s1,s2,0,0,m ,n);
// return 0;
// }



#include<iostream>
#include<vector>

using namespace std;
int fbottomup(string s1,string s2,int i, int j,int m ,int n){
    vector<vector<int>> dp(m+1,vector<int>(n+1,0));

    for(int i = m-1; i >=0;i--){
        for(int j = n-1;j>= 0;j--){
            if(s1[i]==s2[j]){
                dp[i][j] = 1+dp[i+1][j+1];
            }else{
                dp[i][j]=max(dp[i][j+1] ,dp[i+1][j]);
            }
        }
    }

    return dp[0][0];
}
int main(){
    int m ,n;
   
    string s1;
    string s2;
    cin >> s1 >> s2;

    m = s1.size();
    n = s2.size();

    cout << fbottomup(s1,s2,0,0,m ,n);
return 0;
}
