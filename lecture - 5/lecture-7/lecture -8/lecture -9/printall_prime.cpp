#include<iostream>
#include<cmath>

using namespace std;

bool isprime( int n){

    int sqN = sqrt(n);

    int i = 2;

    while ( i <= sqN){
        if ( n % i == 0){

            return false;
        }

        i++;
    }

    return true;
}

void printprimes(int m){

    for( int n = 2; n <= m; n++){
        if( isprime(n)){

            cout << n << " ";
        }
    }

    cout << endl;

}
int main(){

    int m;
    cin >> m;

    printprimes(m);

    return 0;
}


