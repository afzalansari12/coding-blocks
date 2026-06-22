#include<iostream>

using namespace std;

int main(){
    int arr[3][3] = { { 50, 80, 20},
                       {90, 10, 70},
                      { 60,  30, 40}};
                      int target;
                      cin >> target;

            for(int i = 0; i < 3;i++){

                for(int j= 0; j < 3;j++){
                    if(arr[i][j] == target){
                        cout << "target found ";
                        break;
                    }
                }
            }
                      
     return 0;                 
}


