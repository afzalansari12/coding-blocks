#include<iostream>
#include<string>
using namespace std;
int f(const string& str1 , const string& str2 ,int m , int n , int i,int j){
    
    if(i == m || j == n){
        return 0;
    }
    if(str1[i] == str2[j]){
        return 1 + f(str1,str2,m,n,i + 1,j+ 1);

    }
    
    return max(f(str1,str2,m,n,i + 1,j), f(str1,str2,m,n,i ,j+ 1));

}
      int fbottomup(const string& str1 , const string& str2 ,int m , int n ){
        vector<vector<int>>& dp(m + 1, vector<int>(n + 1, 0)); //error
            for(int i = m - 1; i >= 0; i-- ){
                for(int j = n - 1; j >= 0; j--){
                    if(str1[i] == str2[j]){
                         dp[i][j] = 1 + dp[i + 1][j+ 1];
                    }
                    else{

                        dp[i][j] = max(dp[i + 1][j],dp[i][j + 1]);
                    }
                }
            }
            string ans ="";
            int i = 0;
            int j = 0;
            while(!(i == m || j == n)){
                ans += s[i];
                i++;
                j++;
            } else if (dp[i][j]== dp[i][j + 1]){
                j++;
            } else{
                i++;
            }
            cout << ans << endl;
            return dp[0][0];
}



int main(){
    int i, j;
    string str1("agct");
    string str2("atgc");
     int m = str1.size();
     int n = str2.size();
    cout << f(str1,str2,m,n,0,0) << endl;
  cout << fbottomup(str1,str2,m,n) << endl;
return 0;
}