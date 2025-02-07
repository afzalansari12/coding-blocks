#include<iostream>
using namespace std;

int f(int x[],int s, int e){

    int m = s+ (e-s)/2;

    int A = f(x,s, m);

    int B = f(x,m+1,e);

    return A+B;

}



 



int main(){
      int x[] = { 10,20, 30, 40,50};
      int n = sizeof(x)/ sizeof(int);
      cout << f(x,0,n-1) << endl;

    return 0;
}