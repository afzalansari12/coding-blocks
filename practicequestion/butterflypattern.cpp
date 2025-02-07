
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[] = {2, 7, 11, 15};
//     int t = 9,i ,j;

//     int n = sizeof(arr)/sizeof(int);
//     for(i = 0; i < n - 1; i++){
//         for(j = i +1; j < n - 1; j++){
        
       
//         if(arr[i] + arr[j] == t ){
            

//             cout << i << " " << j ;
//         }

//     }
    
//     cout << endl;

//     }
//     return 0;
// }
#include <iostream>
using namespace std;

int main() {
    int N; // Number of rows
    cout << "Enter the number of rows: ";
    cin >> N;

    for (int i = 0; i < N; i++) { // Iterate through rows
        for (int j = 0; j < N; j++) { // Iterate through columns
            // Print '*' for boundaries or diagonal conditions
            if (i == 0 || i == N - 1 || i == j || i + j == N - 1) {
                cout << "* ";
            } else {
                cout << "  "; // Print space for other positions
            }
        }
        cout << endl; // Move to the next line after each row
    }

    return 0;
}
