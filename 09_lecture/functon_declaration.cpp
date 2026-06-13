// #include<iostream>
// using namespace std;

// bool iseven(int n){
// //     if(n%2 == 0){
// //         return true;
// //     }
// //  return false;
// return n%2 == 0;
// }
// int main(){
//    cout << iseven(4) << endl;
//    cout << iseven(5);
// return 0;
// }

#include<iostream>
using namespace std;
void increment(int a){
     a++;
}
int main(){
    int a = 0;
    // cin >> a;

    cout << " i am inside main before";

    increment(a) ;

    cout << " i am inside main after";


return 0;
}