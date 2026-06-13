#include<iostream>

using namespace std;

void greet(){
    cout << "namaste";
}

int add(int a ,int b){
    return a+b;
}
bool ascending(int a , int b){
    return a > b;
}

int main(){

    int x = 10;
    // int y = 20;


     
    auto* xptr =&x;
    // xptr = &y;
    // const int*  xptr3 = &x;
    //  int* const xptr1 = &x;

    // int ** xxptr= &xptr;
    // int *** xxxptr = &xxptr;

    // cout << " x = " << x << endl;
    // cout << "*xptr = " << *xptr << endl;
    // cout << "**xxptr = " << **xxptr << endl;
    // cout << "***xxxptr =" << ***xxxptr << endl;
    // cout << "*xptr3 = " << (*xptr3)++ << endl;
    // cout << "*xptr3 = " << (*xptr3)++ << endl;
    // cout << "*xptr = " << xptr << endl;

//  cout << (void*)&greet << endl;
//  int a = 5;
//  int b = 10;
//  cout << (void*)&add << endl;
//  cout <<  add << endl;
//  cout << (void*)&ascending << endl;

//  cout << add(3,4);

//  void (*gptr)() = &greet;
  
//   cout << (void*)gptr << endl;

//   void (*gptr)() = &greet;

//  cout << (void*)gptr << endl;


  int (*aptr)(int , int) = &add;

 cout << (void*)aptr << endl;

 cout << add(1,2) << endl;
 cout << (*aptr)(1,2) << endl;
 cout << aptr(1,2) << endl;
 cout << (*add)(1,2);


    return 0;
 }