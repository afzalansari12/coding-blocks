#include<iostream>
using namespace std;
int main(){

    int arr[5] = {10, 20, 30 ,20, 40};
    int n = sizeof(arr)/sizeof(int);

    int t = 10;
   int i = 0;
    for(i = n - 1; i >= 0; i--){
        if (arr[i ] == t){


        cout << " last occurance  of target is found  at  index  " << " "  <<  t  <<  i << endl;
        break;
        
        }
       


    }

    if( i == - 1){

        cout << t << "  last occurance t is not found at  any index " <<  endl;

    }
    return 0;
}