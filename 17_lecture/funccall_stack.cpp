#include<iostream>
using  namespace std;
   int* f() {
    int x = 10;
    return &x;
   }




int main(){

    int* xptr = f();
    cout << *xptr << endl;
    return 0;
}
