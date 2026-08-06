// #include<iostream>
// using namespace std;
// int cnt;
// int f(int a[],int i, int j,int y){
//     cnt++;
//     if(i>j){
//         return 0;
//     }
//     if(i==j){
//      return y*a[i];
//     }

//     int x = a[i]*y + f(a,i+1,j,y+1);

//     int Y = a[j]*y + f(a,i,j-1,y+1);


//     return  max(x,Y);
// }
// int main(){
//     int n;
//     cin >> n;
//     int a[n][n][n+1];

//     int i = 0; int j = n-1;
//     int y = 1;

//     for(int i = 0; i < n; i++){
//         cin >> a[i];
//     }
//  cout << f(a,0,n-1,1) << endl;
//  cout << cnt;
// return 0;
// }



// #include<iostream>
// #include<cstring>

// using namespace std;

// int cnt;
// int dp[100][100][101];

// int f(int a[],int i, int j,int y){
//     cnt++;
//     if(i>j){
//         return 0;
//     }

//     if(dp[i][j][y]!=-1){
//         return dp[i][j][y];
//     }

//     if(i==j){
//      return dp[i][j][y] = y*a[i];
//     }

//     int x = a[i]*y + f(a,i+1,j,y+1);

//     int Y = a[j]*y + f(a,i,j-1,y+1);


//     return  dp[i][j][y] = max(x,Y);
// }

// int main(){
//     int n;
//     cin >> n;
//     int a[n];
//     for(int i = 0; i < n; i++){
//         cin >> a[i];
//         }


//     memset(dp,-1,sizeof(dp));
//  cout << f(a,0,n-1,1) << endl;

//    cout << cnt;
// return 0;
// }


//spaceoptimization

// #include<iostream>
// #include<cstring>

// using namespace std;

// int cnt;
// int dp[100][100];

// int f(int a[],int i, int j){
//     int n = sizeof(*a)/sizeof(int);
//     int y = n+i-j;
//     cnt++;
//     if(i>j){
//         return 0;
//     }

//     if(dp[i][j]!=-1){
//         return dp[i][j];
//     }

//     if(i==j){
//      return dp[i][j] = y*a[i];
//     }

//     int x = a[i]*y + f(a,i+1,j);

//     int Y = a[j]*y + f(a,i,j-1);


//     return  dp[i][j] = max(x,Y);
// }

// int main(){

//     int n;
//     cin >> n;

//     int a[n];

//     for(int i = 0; i < n; i++){
//         cin >> a[i];
//         }

//  memset(dp,-1,sizeof(dp));
//  cout << f(a,0,n-1) << endl;

//    cout << cnt;
// return 0;
// }



nt fstate_optimisedbottomup(const  vector<int>&p ,int n ){
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