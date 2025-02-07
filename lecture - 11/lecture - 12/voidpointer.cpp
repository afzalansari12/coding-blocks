#include<iostream>

using namespace std;

void increment(void* pvoid, int size){
    if(size == sizeof(int )){

        int* pint =( int*)pvoid;
        (*pint)++;
    } else if (size == sizeof(char)){
        char* pchar = (char*)pvoid;
        (*pchar)++;

    }
}
int main(){

    int x =0;
    char y ='a';

    increment (&x, sizeof(x));
    increment( &y, sizeof(y));


    cout << x << endl << y << endl;
    return 0;



}