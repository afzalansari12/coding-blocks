#include<iostream>
using namespace std;

void increment( int a){

    a++;
}






int main(){

int a =0;

 cout << " inside increment() before ++a =" << a << endl;
increment(a);
cout << " inside increment() before ++a =" << a << endl;

}