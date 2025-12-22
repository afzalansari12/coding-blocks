#include<iostream>
using namespace std;

int main(){

    int n =128;
    int cnt =0;

    while( n>0){

        int rightmostbit = n&1;
        if ( rightmostbit) {
            cnt++;
        }

        n = n >> 1;
    }

    cout << cnt << endl;
    return 0;
}