#include<iostream>
using namespace std;

int f(int a,int b) {


  if (b == 0){

    return 0;
  }





    int A = f(a, b -1);
    

    return   a + A;

}

int main(){
    int a ;
    cin >> a;

    int b ;
    cin >> b;


    cout << f(a,b) << endl;

    return 0;
}