#include<iostream>
using namespace std;

int f(int n){

    if(n == 0){
        
        return ;

    }
    cout << n << " ";

    f(n -1);

    
}

int main(){

    int n;
    cin >> n;

    f(n);


    return 0;
}