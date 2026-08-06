#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];

        for(int i = 0; i < n ;i++){
            cin >> a[i];

        }
        int ans=0;
        for(int i = 1; i < n;i++){
              if(a[i-1] == a[i] && i > 0){
                ans += 2*a[i-1];
              }else{
                ans+=a[i-1];
              }
        }
        
        cout << ans << endl;
        
    }
return 0;
}