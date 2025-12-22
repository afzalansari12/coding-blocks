#include<iostream>

using namespace std;
int increment(int* aptr){

 (*aptr)++;

    return 0;
}

int main(){

    int a = 10;

    cout << "inside main(), before increment() a =" << a << endl;
increment(&a);
    cout << "inside main() , after increment() a = " << a << endl;

    return 0;
}