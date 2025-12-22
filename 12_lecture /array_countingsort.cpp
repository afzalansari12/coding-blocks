#include<iostream>
#include<cstring>

using namespace std;

int main(){

    int arr[]  = { 1, 0, 3, 2, 3, 1 , 2 , 0, 2};
    int n = sizeof(arr)/ sizeof(int);

    int k = 3;
    int freq[10];

    memset(freq, 0, sizeof(freq));

    for(int i = 0; i < n ; i++){

        int x = arr[i];
        freq[x]++;
    }
        for(int i = 0; i <= k ; i++){

            int x = freq[i];

            for (int j = 1; j <= x; j++){
                cout << i << " ";

            }
        }




   cout << endl;




    return 0;

}