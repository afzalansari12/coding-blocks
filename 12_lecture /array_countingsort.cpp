// #include<iostream>
// #include<cstring>

// using namespace std;

// int main(){

//     int arr[]  = { 1, 0, 3, 2, 3, 1 , 2 , 0, 2};
//     int n = sizeof(arr)/ sizeof(int);

//     int k = 3;
//     int freq[k+1];

//     memset(freq, 0, sizeof(freq));

//     for(int i = 0; i < n ; i++){

//         int x = arr[i];
//         freq[x]++;
//     }
//         for(int i = 0; i <= k ; i++){

//             int x = freq[i];

//             for (int j = 1; j <= x; j++){
//                 cout << i << " ";

//             }
//         }




//    cout << endl;




//     return 0;

// }

#include<iostream>
#include<vector>

using namespace std;

int main(){

    int arr[] = {4,3,2,2,4,3,5,4,5,2};
    int n = sizeof(arr) / sizeof(int);

    int l = 2;
    int r = 5;

    vector<int> freq[r - l + 1] = {0};

    // frequency count
    for(int i = 0; i < n; i++) {

        int x = arr[i];

        freq[x - l]++;
    }

    // print sorted array
    for(int i = 0; i < r - l + 1; i++) {

        int x = freq[i];

        for(int j = 1; j <= x; j++) {
            cout << i + l << " ";
        }
    }

    cout << endl;

    return 0;
}