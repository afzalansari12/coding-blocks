#include<iostream>
#include<cmath>

using namespace std;

int main(){


    int n;
    cin >> n;

    int squareroot = sqrt(n);

    int i = 2;

    while( i <= squareroot){

        if ( n % i == 0){


            cout << "not prime " << endl;
            break;
        }

        i = i + 1;
    }

      if ( i > squareroot) {


        cout << " prime " << endl;
      }

      return 0;



}