// #include<iostream>
// using namespace std;
// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         int n;
//         cin >> n;
//         int arr[n];
//         for(int i = 0; i < n ; i++){
//             cin >> arr[i];
//         }
//         bool flag = true;
//         for(int i = 1; i < n ; i++){
//              if (abs(arr[i - 1] - arr[i]) < 2) {
//                 flag = false;
//                 break;
//             }
//         }

//         if(flag){
//             cout << "YES" << endl;
//         }else{
//             cout << "NO" << endl;
//         }
//     }
// return 0;
// }


#include<iostream>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n , k;
        cin >> n >> k;
        string s = "";

        if(n - k <= 1){
         cout <<  "-1" << endl;
             return 0;
        }else{
            for(int i = 0; i < k;i++){
                s+="0";
            }

            for(int j = k+1; j < n; j++){
                s+="1";
            }
        }

       
    cout << s << endl;
        
    }
return 0;
}