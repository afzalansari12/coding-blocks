// #include<iostream>

// using namespace std;

// void selectionsort(int arr[], int n){

//     for( int i = 0; i <= n-2; i++){

//         int minIdx = i;

//         for( int j = i + 1; j <= n -1 ; j++){

//             if ( arr[j] < arr[minIdx]){

//                 minIdx = j;
//             }
//         }

//         swap( arr[i], arr[minIdx]);
//     }
// }

// int main(){

//     int arr[] = { 60,50, 40, 30, 20, 10};
//     int n = sizeof(arr) / sizeof(int);

//     selectionsort(arr, n);

//     for( int i = 0 ; i < n; i++){

//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }int main() {
    
    
    
    // int N; // Number of rows
    // cout << "Enter the number of rows: ";
    // cin >> N;

    // for (int i = 1; i <= N; ++i) {
    //     // Print increasing sequence
    //     for (int j = 1; j <= i; ++j) {
    //         cout << j << " ";
    //     }

    //     // Print spaces
    //     int spaces = 2 * (N - i); // Spaces reduce with each row
    //     for (int j = 1; j <= spaces; ++j) {
    //         cout << "  "; // Two spaces for alignment
    //     }

    //     // Print decreasing sequence
    //     for (int j = i; j >= 1; --j) {
    //         cout << j << " ";
    //     }

    //     cout << endl; 
    //      return 0;// Move to the next row
    // }

//     // return 0;
//     #include <iostream>
// #include <iomanip>
// using namespace std;

// int main() {
//     int N; // Number of rows
//     cout << "Enter the number of rows: ";
//     cin >> N;

//     for (int i = 1; i <= N; ++i) {
//         // Print increasing sequence
//         for (int j = 1; j <= i; ++j) {
//             cout << j ;
//         }

//         // Print spaces
//         int spaces = 2 * (N - i); // Spaces reduce with each row
//         for (int j = 1; j <= spaces; ++j) {
//             cout << " "; // Two spaces for alignment
//         }

//         // Print decreasing sequence
//         for (int j = i; j >= 1; j--) {
//             cout << j ;
//         }

//         cout << endl; // Move to the next row
//     }

//     return 0;
// }
#include <iostream>
using namespace std;

int main() {
    int n = 5; // Number of rows
    for (int i = 1; i <= n; i++) {
        // Print numbers
        for (int j = 1; j <= n - i + 1; j++) {
            cout << j << " ";
        }
        // Print asterisks
        for (int k = 1; k <= i; k++) {
            cout << "* ";
        }
        cout << endl; // Move to the next line
    }
    return 0;
}
