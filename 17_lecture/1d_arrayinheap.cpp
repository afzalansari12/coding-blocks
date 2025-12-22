#include<iostream>
using namespace std;
int main(){

    int* ptr = new int[5];
    *ptr = 10;
    *(ptr + 1) = 20;
    *(ptr + 2)= 30;
    *(ptr + 3)= 40;
    *(ptr + 4)= 50;

    cout << *ptr << " ";
    cout << (*ptr + 1)  << " ";
    cout << (*ptr + 2)  << " ";
    cout << (*ptr + 3)  << " ";
    cout << (*ptr + 4)  <<  endl ;

    for (int i = o ; i < n; i++);

    cout << *(ptr + i) << " ";

    
return 0;
    

}