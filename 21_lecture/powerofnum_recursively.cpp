#include<iostream>

using namespace std;
int f(int x, int y){
if (y == 0){
    return 1;
}

int A = f(x,y/2);

if(y %2 == 0){

    return A*A;
}
return A*A*x;
}



int main(){

int x, y ;
cin >> x >> y;

cout << f(x,y) << endl;
    return 0;
}