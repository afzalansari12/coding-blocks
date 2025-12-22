#include<iostream>

using namespace std;

int main(){

int n ;

cin >> n;

int rev ;

while ( n > 0){

    int d = n % 10;
    rev = rev * 10 + d;
    n = n/ 10;
}
 cout << rev << endl;
 return 0;

}

