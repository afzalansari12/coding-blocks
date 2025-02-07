#include<iostream>
using namespace std;
int main(){
    int n;
    cin >>n;

    int cnt = 0;
    while( n >0){
        cnt++;
        n = n & ( n-1);
    }
    cout << cnt << endl;
    return 0;
}
