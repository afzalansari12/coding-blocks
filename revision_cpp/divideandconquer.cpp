// #include<iostream>
// using namespace std;
// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//       int x, y;
//       cin >> x >> y;
//       int i;
//       bool flag = true;
//   for (int i = 1; i <= x; i++) {
//     if (x % i == 0 && x / i == y) {
//         cout << "YES\n";
//         flag = false;
//         break;
//     }
// }
//       if(flag){
//       cout << "NO" << '\n';
//       }
//     }
// return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// bool good(long long n) {
//     set<int> s;
//     while (n) {
//         s.insert(n % 10);
//         n /= 10;
//     }
//     return s.size() <= 2;
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;

//     while (t--) {
//         long long x;
//         cin >> x;

//         bool found = false;

//         for (int d = 1; d <= 9 && !found; d++) {
//             long long y = 0;
//             for (int len = 1; len <= 10; len++) {
//                 y = y * 10 + d;

//                 if (y >= 2 && y <= 1000000000LL && good(x * y)) {
//                     cout << y << "\n";
//                     found = true;
//                     break;
//                 }
//             }
//         }
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n;
//         cin >> n;

//         string s;
//         cin >> s;

//         bool alternating = true;

//         for (int i = 1; i < n; i++) {
//             if (s[i] == s[i - 1]) {
//                 alternating = false;
//                 break;
//             }
//         }

//         if (alternating)
//             cout << n << '\n';
//         else
//             cout << 1 << '\n';
//     }
// }

#include<iostream>
using namespace std;
int main(){
    int t;

    cin >> t;
    while(t--){
        int n;
        cin >> n;

        int a[n];
        
        int b[n];
        int i;

        for( i = 0; i < n; i++){
            cin >> a[i];
        }
        for(i = 0; i < n; i++){
            cin >> b[i];
        }

        for(i = 1; i <= n; i++){
            int l = 1;
            int r = n;
             if(a[i]==b[i]){
                    l++;
                }
         if(a[i] != b[i] && (i -l)%2 == 0){
                a[i] = a[i]+1;
              }else if(a[i] != b[i] && (i -l)%2 == 1){
                a[i] = a[i]-1;
              }else{
                 break;
              }
              
        }

       if(i!=n){
        cout << "NO" <<'\n';
       }else{
        cout << "YES" << '\n';
       }

    }
return 0;
}