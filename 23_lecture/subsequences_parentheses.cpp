#include<iostream>
using namespace std; 

void f(int n, char out[], int i , int oc, int cc){
if(i == 2*n){
    out[i] = '\0';
    cout << out << endl;
    return;
}

    if(oc < n ){

    out[i] = '(';
    f(n,out ,i+1,oc + 1, cc);
}

if(cc < n ){

    out[i] = ')';
    f(n,out ,i+1,oc, cc + 1);
}


}



int main(){
     int n = 2;

     char out[20];
     f(n,out, 0,0,0);

    return 0;
}
