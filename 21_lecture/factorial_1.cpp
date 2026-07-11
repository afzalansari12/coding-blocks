// #include<iostream>
// using namespace std;

// int f(int n){

//     if(n == 0){

//         return 1;
//     }

//     int A = f(n -1);

//     return n*A;
// }

// int main(){
//     int n ;
//     cin >> n;
//     cout << f(n) << endl;

//     return 0;

// }

#include<iostream>

using namespace std;

void f(int n){

    if(n == 0){

        return;       
    }

      f(n-1);

    cout << n << " ";

}

int main(){

    int n ;
    cin >> n;

    f(n);

    return 0;
}