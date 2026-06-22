#include<iostream>
using namespace std;
 void  transposematrix(int arr[4][4], int n){
       for(int i = 0; i < n; i++){
     for(int j = i+1; j < n;j++){
          swap(arr[i][j],arr[j][i]);
     }
     cout << endl;

}

}

int main(){
     
 int arr[4][4] ={{ 11, 12, 13, 14 },{15,16,17,18},{19,20,21,22},{32,24,25,26}};
     
for(int i = 0; i < 4; i++){
     for(int j = 0; j < 4;j++){
          cout << arr[i][j] << " ";
     }
     cout << endl;
  }


 transposematrix( arr ,4);


  for(int i = 0; i < 4; i++){
     for(int j = 0; j< 4;j++){
          cout << arr[i][j] << " ";
     }
     cout << endl;
  }


     return 0;
}