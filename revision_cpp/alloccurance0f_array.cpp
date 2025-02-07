#include<iostream>
using namespace std;
int main(){

    int arr[5] = {10, 20 , 20, 30 , 40};
    int n = sizeof(arr)/ sizeof(int);

    int t = 20;
    int i ;
    for(i=0; i <=n; i++){

        if(arr[i]== t){
            cout << t << "is found at index " << i << endl;
        }
    }

    if(i == n){

        cout << t << " is not found at any index" << endl;
    }
    
    return 0;
}