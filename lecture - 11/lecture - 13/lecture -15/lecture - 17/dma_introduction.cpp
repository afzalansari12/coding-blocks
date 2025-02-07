#include<iostream>
using namespace std;

int main(){

    int* ptr = new int ;

    *ptr = 50;

    cout << *ptr << endl;
   delete* 'iptr';
    char* chptr = new char;
    *chptr = 'B';

    cout << *chptr << endl;

    return 0;
}
