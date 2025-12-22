#include<iostream>
using namespace std;
int main(){

    

    int A[5] = { 10, 20, 30, 40, 50};
      int n = sizeof(arr) / sizeof(int);


      int t = 20;

      bool flag = false;

      for ( int i =0; i< n; i++){

        int n = sizeof(arr)/ sizeof(int);

        if (arr[i] == t){

          flag = true;

          cout << " 1st occ of" << t << " is found at index" << i <<  endl;       
          
           break;
           }
      }if ( flag == false) {

        cout << -1 << endl;
      }


      return 0;
}
