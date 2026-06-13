// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int n ;
//     cin >> n;

//     int arr[n];

//     int maxi = INT_MIN;
//     int sum = 0;

//     for(int i = 0; i < n ; i++){
//         cin >> arr[i];
//     }

//     for(int i = 0; i < n ; i++){
//       maxi = max(arr[i], maxi);
//     }
//     for(int i = 0; i < n ; i++){
//         sum =  sum + (maxi - arr[i]);
//     }
//     cout << sum << " ";
//    return 0;
// }

// #include<iostream>
// #include<climits>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;

//     int arr[n];

//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }

//     int maxi = INT_MIN, mini = INT_MAX;
//     int maxIndex = 0, minIndex = 0;

//     for(int i = 0; i < n; i++){
//         if(arr[i] > maxi){
//             maxi = arr[i];
//             maxIndex = i;       
//         }
//         if(arr[i] <= mini){
//             mini = arr[i];
//             minIndex = i;       
//         }
//     }

//     int sec = maxIndex + (n - 1 - minIndex);

//     if(maxIndex > minIndex){
//         sec--;   
//     }

//     cout << sec;

//     return 0;
// }


// #include<iostream>
// #include<algorithm>

// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i = 0; i <n; i++){
//         cin >> arr[i];
//     }
//     sort(arr, arr + n);
//     for(int i = 0; i <n; i++){
//         cout << arr[i] << " ";
//     }
// return 0;
// }


#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int hc , dc;
        cin >> hc >> dc;

        int hm , dm;
        cin >> hm >> dm;
         
        int k , w, a;
        cin >> k >> w >> a;
         bool win = false;

        for(int i = 0; i <= k; i++){
            long long attack = dc + i*w;
            long long health = hc + (k-i)*a;

            long long hitsC = (hm + attack - 1) / attack;
            long long hitsM = (health + dm - 1) / dm;

            if(hitsC <= hitsM){
                win = true;
                break;
            }
        }

        if(win) cout << "YES\n";
        else cout << "NO\n";
    }

return 0;
}
