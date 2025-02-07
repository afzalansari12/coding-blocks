#include<iostream>
using namespace std;

int main(){
    int arr[3][4] = { {10, 20, 30, 40,},
                      { 50, 60 , 70, 80,},
                      {90, 100, 110, 120}};



cout << arr[0][0] << " ";
cout << arr[0][1] << " ";
cout << arr[0][2] << " ";
cout << arr[0][3] << endl;

cout << arr[1][0] << " ";
cout << arr[1][1] << " ";
cout << arr[1][2] << " ";
cout << arr[1][3] << endl;

cout << arr[2][0] << " ";
cout << arr[2][1] << " ";
cout << arr[2][2] << " ";
cout << arr[2][3] << endl;

int m = 3;
int n = 4;

for(int i = 0; i < m ; i++){

    cout << arr[m] << endl;

}

for(int j =0; j < n; j++){

    cout << arr[n] << endl;
}





return 0;

}
