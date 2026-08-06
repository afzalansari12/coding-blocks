#include<iostream>
using namespace std;
int main(){
    int n ,k;
    cin >> n >> k;
   int sum = 0;
   
    while(n > 0){

         sum += n%10;
        n/=10;

    }

    sum = sum*k;


    if(sum%9!=0){
        cout <<  sum%9;
    }else{
        cout << 9;
    }

return 0;
}