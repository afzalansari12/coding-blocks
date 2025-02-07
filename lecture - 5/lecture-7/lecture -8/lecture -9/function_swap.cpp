#include<iostream>
using namespace std ;

void myswap(int& aref , int& bref) {

    int temp = aref;

    aref = bref;
    bref = temp;



}

int main(){

    int a = 10;
    int b= 20;

    cout << a << " " << b << endl;

    myswap( a,b);

    cout << a << " " << b << endl;
    return 0;
}

