#include<iostream>

using namespace std;

int f(int n){


    if(n == 0|| n == 1){
    return n;
    
    }

int A = f(n -1);
int B = f(n -2);

return  A + B;

}
int main(){

    int n ;
    cin >> n;

    cout << f(n) << endl;

    return 0;
}