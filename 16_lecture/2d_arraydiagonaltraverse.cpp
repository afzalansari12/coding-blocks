#include<iostream>

using namespace std;

int main()
{
     int arr[3][4]={{10,20,34,40},
    {20,30,50,60},{30,40,60,67
    } };
    for(int i = 0; i < 3;i++){
        for(int j = 0; j < 4; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}