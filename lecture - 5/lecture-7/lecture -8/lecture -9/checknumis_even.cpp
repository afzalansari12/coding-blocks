#include<iostream>

using namespace std; 

void isEVEN(int n){

    if( n%2 == 0){
        cout << n << "is even" << endl;
    }else{

        cout << n << " is odd " << endl;
    }
}

int main(){
    isEVEN(5);
    isEVEN(4);

    return 0;
}