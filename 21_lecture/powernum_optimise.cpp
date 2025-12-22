#include<iostream>
using namespace std;

int pow(int x , int y)
{

    if(y == 0){
        return 1;
    }

 int A = pow(x, y -1);



 return x*A;
 
}

int main(){

    int y, x;

   cin >> x >> y;

   cout << x << '^' << y << " = " << pow(x,y) << "\n ";

    return 0;
}