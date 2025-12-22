#include<iostream>
using namespace std;

int main() {

       int n;
       cin>> n;

       int i = 1; 

       while( i <= n){

        int j = 1;
         while( j <= i){

            cout<< " *";
            j++;

         }  


         cout << endl;

         i++;






       }


for(int i = 1; i <= n ; i++){
    for(int j = 1; j <=i;j++){
      cout<<" *";
    }
   cout << endl;
  }
         
         return 0;



}

// int main(){
//   int n ;
//   cin >> n;

//   for(int i = 1; i <= n ; i++){
//     for(int j = 1; j <=i;j++){
//       cout<<"*";
//     }
//    cout << endl;
//   }
//   return 0;

// }