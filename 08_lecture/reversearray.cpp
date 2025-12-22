#include<iostream>
#include<utility>
using namespace std;

int main(){

    int arr[]= {10, 20, 30 , 40, 50, 60, 70};
int n = sizeof(arr)/sizeof(int);
int  j = n - 1;
int i = 0;

while( i < j){

    swap( arr[i], arr[j]);
    i++;
    j--;
}
for ( int i = 0; i< n; i++){
    cout << arr[i] << " ";
}

cout << endl;
return 0;


}