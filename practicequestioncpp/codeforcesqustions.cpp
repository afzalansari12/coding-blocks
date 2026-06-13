#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int sereja_sum = 0;
    int dima_sum = 0;
     int j = n - 1;
     int i = 0;
     int x = 0;

while(i <= j){

   if(x%2 == 0){

       if(arr[i] > arr[j]){
        sereja_sum += arr[i];
        i++;
       }else{
        sereja_sum += arr[j];
        j--;
       }
       x++;
       
    }else{
        if(arr[i] > arr[j]){
        dima_sum += arr[i];
        i++;
       }else{
        dima_sum += arr[j];
        j--;
       }
       x++;
        
    }

       
   }

   cout << sereja_sum << " " << dima_sum << endl ;
return 0;
}

// #include<iostream>
// using namespace std;

// int main(){

//     int n;
//     cin >> n;

//     int cnt = 1;

//     string last;
//     cin >> last;

//     n--;

//     while(n > 0){

//         string now;
//         cin >> now;

//         if(last != now){
//             cnt++;
//         }

//         last = now;

//         n--;
//     }

//     cout << cnt << endl;

//     return 0;
// }

// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){

//     int t;
//     cin >> t;

//     while(t--){

//     int n ;
//     cin >> n;
//     int a[n];
//     for(int i = 0; i < n ; i++){
//         cin >> a[i];
//     }
//     int cnt = 0;
//     int ans = 0;
//     for(int i = 0; i < n; i++ ){
//         if(a[i] == 0){
//             cnt++;
//         }else{
//             cnt = 0;
//         }

//     ans = max(cnt ,ans);
//     }
//     cout << ans << endl;

//     }
// return 0;
// }

// #include<iostream>
// #include<algorithm>
// using namespace std;

// int main(){

//     int n;
//     cin >> n;

//     int arr[n];
//     int sum = 0;

//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//         sum += arr[i];
//     }

//     sort(arr, arr + n);

//     int twinsum = 0;
//     int cnt = 0;

//     for(int i = n - 1; i >= 0; i--){

//         twinsum += arr[i];
//         cnt++;

//         if(twinsum > sum - twinsum){
//             break;
//         }
//     }

//     cout << cnt << endl;

//     return 0;
// }


// #include<iostream>
// #include<algorithm>

// using namespace std;

// int main(){

//     int n ;
//     cin >> n;
//     int arr[n];

//     for(int i = 0; i < n ; i++){
//             cin >> arr[i];
//     }
//     sort(arr, arr + n);

//     long long waiting = 0;
//     int cnt = 0;

//     for(int i = 0; i < n; i++){

//         if(waiting <= arr[i]){
//             cnt++;
//             waiting += arr[i];
//         }
//     }

//    cout << cnt << endl;
// return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int t;
//     cin >> t;

//     while(t--){

//       int n ;
//       cin >> n;
//       int arr[n];
//     for(int i = 0; i < n; i++){
//          cin >> arr[i]; 
//     }

//     int i = 0;
//     int cnt = 0;

//      while(i < n -1){
//         if((arr[i])%3 == 0|| (arr[i] + arr[i+1])%3 == 0){
//                cnt++;
//         }
//         i++;
//      }
//        cout << cnt << endl;
//     }
// return 0;
// }


// #include<iostream>
// #include<cmath>
// using namespace std;
// int main(){
//     int t ;
//     cin >> t;
//     while(t--){
//         int n;
//         cin >> n;
        
//     int x1, x2;
//     cin >> x1 >> x2;

//     int k ;
//     cin >> k;

//    int d = abs(x1-x2);
//     d = min(d , n - d);

//   cout << d + k << endl;

//     }
// return 0;
// }