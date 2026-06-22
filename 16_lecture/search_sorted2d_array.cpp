// #include<iostream>
// using namespace std;
//  bool ispresent(int arr[][n], int m , int n, int t){
//     for(int i = 0; i <m ; i++){
//         if(binary_search(arr[i],arr[i] + n, t)){
//             return true;
//             break;
//         }
//     }
//     return false;
//  }
// int main(){
//     int n , m;
//     cin >> m , n;
//     int t;
//     cin >> t;
//     int arr[m][n];
//     for(int i = 0; i < m ; i++){
//         for(int j = 0; j < n;j++){
//             cin >> arr[i][j];
//         }
//     }
//  if( ispresent(arr, m , n, t)){
//     cout << t <<  " found";
//  }else{
//     cout << " target not found";
//  }
// return 0;
// }

#include<iostream>
using namespace std;
int main(){
     int arr[3][3] = { { 10, 20, 30},
                       {40, 50, 60},
                      { 70,  80, 93}};
      int i = 0; 
      int j = 2;

      int t;
      cin >> t;

      while( j >=0 && i <= 2){

        if(arr[i][j] == t){
            cout << t << "found";
            break;
        }
        if(arr[i][j] > t){
            i++;
        }else{
            j--;
        }

      }

   return 0;
}