#include<iostream>

using namespace std;
int main(){
    int t ;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int p[n];
        int even = 2;
        int odd = 1;
         
         for(int i = 0; i < n; i++){
            if(i%2){
                p[i]=odd;
                odd+=2;
            }else{
                p[i]=even;
                even+=2;
            }
         }
        for(int i = 0; i < n; i++){
            cout << p[i];
        }


    }
return 0;
}