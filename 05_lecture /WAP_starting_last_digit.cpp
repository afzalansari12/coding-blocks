#include<iostream>
using namespace std;
int main(){
    int n ;
    cin >> n;
    for(int i = 1; i <= n/2 ; i++){
            cout << i << " " << n - i +1 << endl;
    }
return 0;
}

// for(int i , j = n; i < j; i++, j--){
 //   cout << i << j;
// }