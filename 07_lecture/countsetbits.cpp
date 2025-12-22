#include<iostream>
#include<cmath>

using namespace std;

int main(){

int n;
cin >> n;
int cnt = 0;

for( int k = 0; k < 32; k++) {

    if ( ( n >> k) & 1) {
        cnt++;
    }

    
}
cout << cnt << endl;

     return 0;




}