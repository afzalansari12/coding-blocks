#include<iostream>

using namespace std;

int main(){

    int n ;
     cin >> n ;

     int i = 1;

     while(i <= n ){

        
       int num = i%2 == 0 ? 1 :0;

       int j = 1;

       while(j <= i ){
         num = 1- num;
        cout << num ;
          
        j++;

       }
        i++;
        cout << endl;
     
            
     }

    return 0; 
}