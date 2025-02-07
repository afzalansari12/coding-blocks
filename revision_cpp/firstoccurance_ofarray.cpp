#include<iostream>
using namespace std;

int main(){

    int arr[5] = {10, 10, 30, 30,30};
    int n = sizeof(arr)/sizeof(int);
    int t = 20;
    int i;
    for(i = 0; i < n; i++){

        if(arr[i] == t){
            cout << t << " is found at index " <<  i << endl;

        }
    }
    
    
    if(i == n){
        cout << t << "is not found at index" <<  endl;
    }
    return 0;
}