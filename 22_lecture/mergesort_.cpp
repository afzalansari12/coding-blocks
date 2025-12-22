#include<iostream>
using namespace std;

void mergesort(int x[], int s, int e,int m){
    if (s ==e){
        return;
    }

    int m = s + (e-s)/2;
    mergesort(x,s,m);
    mergesort(arr,m+1,e);
    merge (arr,s,m,e);
}



int main(){
      int x[] = { 10,20, 30, 40,50};
      int n = sizeof(x)/ sizeof(int);
      cout << f(x,0,n-1) << endl;

    return 0;
}