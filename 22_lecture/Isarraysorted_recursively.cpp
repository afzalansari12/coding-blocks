#include<iostream>
using namespace std;

bool f(int x[], int n,int i){

if (i == n-1){

    return true;
}

return x[i] < x[i+1] and f(x,n,i+1);


}





int main(){
    x[] = {10,20,40,50};
    int n = sizeof(x)/sizeof(int); 

  f(x,n,0) ? cout << "x[] is sorted "  << endl: cout << "x[] is not sorted" << endl ;


    return 0;
}