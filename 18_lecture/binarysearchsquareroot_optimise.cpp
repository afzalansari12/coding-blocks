#include<iostream>
#include<cmath>

using namespace std;
int main(){
    int n ;
    cin >> n;
    double e=0;
    double  s= n;
    double err = 1e-7;
    double ans ;
    while( e-s > err){
        double mid = s + (e-s)/2;
        if(mid*mid <=n){
            ans = mid;
            s= mid + err;
        }else{
            e = e - mid;
        }
    }
    //  cout << setprecision(7) << fixed << ans << end;
    cout << ans;

return 0;
}

// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     double s = 0;
//     double e = n;
//     double err = 1e-7;

//     while (e - s > err) {
//         double mid = s + (e - s) / 2;

//         if (mid * mid <= n)
//             s = mid;
//         else
//             e = mid;
//     }

//     cout << fixed << setprecision(7) << s;

//     return 0;
// }