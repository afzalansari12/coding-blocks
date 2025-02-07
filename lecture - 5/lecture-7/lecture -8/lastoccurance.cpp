#include<iostream>
using namespace std;
int main(){

int arr[5]= {20,  30 , 10, 50,};
int n = sizeof(arr)/sizeof(int);
int  t = 10;
int i;

for( int i = i - 1; i >= 0; i--){

    if(arr[i] == t){

        cout<< "last occ of " << t << " found at index" << i << endl;
        break;
    }
}
if( i == -1){
    cout<< -1;
}



return 0;



}