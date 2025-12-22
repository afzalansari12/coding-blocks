#include<iostream>

using namespace std;

void greet(){
    cout << " namaste " << endl;
}

int add(int a , int b){
    return a+b;
}
bool ascending (int a , int b ){
    return a > b ;
}

int main(){


    void (*gptr)() = &greet;
    int (*aptr)(int,int) = &add;
    bool (*ascptr) (int , int ) = &ascending;

    cout << (void*)&greet << " " << endl;
    cout << (void*)&add << " " << endl;
    cout << ( void*)&ascending << " " << endl;

    greet();
    (*greet)();
    (*gptr)();
    gptr();

    cout << add(2,3) << endl;
    cout << ( *add)(2,3)<< endl;
    cout << (*aptr)(2,3) << endl;
    cout << aptr(2,3) << endl;

    cout << ascending(10,5) << endl;
    cout << (*ascending)(10,5) << endl;
    cout << (*ascptr)(10,5) << endl;
    cout << ascptr(10, 5) << endl;

    return 0;
}