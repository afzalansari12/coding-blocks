#include<iostream>
using namespace std;
int main(){

    int a,b,c;

    cin >> a >> b >> c;

    if(a > b && a > c){
        cout << "greatest of three " << a << endl;
    }

    else{ 
        if( b > c){
          cout << "greatest of three " << b << endl;
         }
       else{
          cout << "greatest of three " << c << endl;
       }
    }
    
return 0;
}