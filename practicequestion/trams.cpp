// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     int current = 0;   
//     int capacity = 0;  

//     for (int i = 0; i < n; i++) {
//         int a, b;
//         cin >> a >> b;

//         current -= a;   
//         current += b;   

//         capacity = max(capacity, current);
//     }

//     cout << capacity;

//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     string s;
//     cin >> s;

//     int zeros = 0;
//     int ones = 0;

//     for(int i = 0; i < s.size(); i++){
//             if(s[i] == '1'){
//                 ones++;
//             }else{
//                 ones = 0;
//             }

//             if(s[i] == '0'){
//                 zeros++;
//             }else{
//                 zeros = 0;
//             }
//     }

//     if(ones >= 7 || zeros >=  7){
//         cout << "NO";
//     }else{
//         cout << "YES";
//     }
// return 0;
// }
// #include <iostream>
// using namespace std;

// int main() {
//     int year;
//     cin >> year;

//     while (true) {
//         year++;

//         int temp = year;

//         int r1 = temp % 10;
//         temp /= 10;

//         int r2 = temp % 10;
//         temp /= 10;

//         int r3 = temp % 10;
//         temp /= 10;

//         int r4 = temp % 10;

//         if (r1 != r2 && r1 != r3 && r1 != r4 &&
//             r2 != r3 && r2 != r4 &&
//             r3 != r4) {
//             cout << year;
//             break;
//         }
//     }

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int x;
//     cin >> x;

//     int cnt = 0;

//     while (x > 0) {
//         cnt += x % 2;  
//         x /= 2;
//     }

//     cout << cnt;
//     return 0;
// }