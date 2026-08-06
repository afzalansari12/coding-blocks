// #include<iostream>
// using namespace std;
// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         int a , b , c;
//         cin >> a >> b >> c;
//         int cnt = 0;
//         while(a!=b && a!=c && c!=b){
//              cnt++;
//            if(a>b && a>c && b > c){
//             a--;
//             c++;
//            }else if(a>b && a>c && b < c){
//                a--;
//                b++;
//            }else if(b>a && b>c && a < c){
//             b--;
//             a++;

//            }else if(b>a && b>c && a > c){
//             b--;
//             c++;

//            }else if(c>a && c>b && a > b){
//             c--;
//             b++;
//            }else if(c > a && c > b && a < b){
//             c--;
//             a++;
//            }
           
//     }
    
//    cout << cnt << endl;

//  }
// return 0;
// }

// #include<iostream>

// using namespace std;
// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         int n;
//         cin >> n;
       
//         string s;
//         cin >> s;
//       string ans = "";
       
//      ans += s[0];

// for (int i = 1; i < n; i++) {
//     if (s[i] != s[i - 1]) {
//         ans += s[i];
//     }
// }

//  cout << ans.size() << endl;
//     }
// return 0;
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

//         int runs = 1;
//         for (int i = 1; i < n; i++)
//             if (s[i] != s[i - 1])
//                 runs++;

//         bool reduce2 = false;
//         for (int i = 1; i < n - 1; i++) {
//             if (s[i - 1] == s[i + 1] && s[i] != s[i - 1]) {
//                 reduce2 = true;
//                 break;
//             }
//         }

//         if (reduce2) {
//             cout << runs - 2 << '\n';
//             continue;
//         }

//         bool reduce1 = false;
//         for (int i = 1; i < n; i++) {
//             if (s[i] == s[i - 1]) {
//                 reduce1 = true;
//                 break;
//             }
//         }

//         if (reduce1)
//             cout << runs - 1 << '\n';
//         else
//             cout << runs << '\n';
//     }

//     return 0;
// }


#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n ; cin >> n;
        string a,b;
        cin >> a >> b;

        if(a==b){
         cout << "yes" << endl;
        }else if(a!=b && n < 3){
            cout << "No" << endl;
        }else if(a!=b && n >=3){
            int i = 0;
        
            while(i < n){
                if(i+2 < n){
                 if(a.substr(i,i+2) == "001"|| a.substr(i,i+2) == "100"){
                      // change that substr to if it is 100 to change it to 001 vice versa 
                      // check if a==b if yes cout  yes else no 
                      // same for  if substr is 110 or 011 change and then comapre with b as many of time
                 }
            
                
            }
        }

    }
    }
return 0;
}