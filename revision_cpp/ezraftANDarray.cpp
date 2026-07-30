#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long sum = 0;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
            sum += a[i];
        }
        int b[n];
      
        for(int i = 0; i < n; i++){
          if(sum%i == 0){
            b[i] = i;
          }
        } 


        for(int i = 0; i < n; i++){
             cout << b[i];
          }
        }
        
         return 0;
}




