#include <iostream>
using namespace std;

int main() {

    int arr[3][3] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}
    };

    int m = 3;
    int n = 3;

    for (int col = 0; col < n; col++) {

        if (col % 2 == 1) {   
            for (int row = m - 1; row >= 0; row--) {
                cout << arr[row][col] << " ";
            }
        }
        else {             
            for (int row = 0; row < m; row++) {
                cout << arr[row][col] << " ";
            }
        }
    }

    return 0;
}