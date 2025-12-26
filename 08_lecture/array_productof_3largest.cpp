#include<iostream>
#include<climits>

using namespace std;

int main() {

    int arr[] = { -100, 5, 0, -200,15, 10};
    int n = sizeof(arr) / sizeof(int);

    int fl = INT_MIN;
    int sl = INT_MIN;
    int tl = INT_MIN;
    int min1 = INT_MAX;
    int min2 = INT_MAX;

    for( int i = 0; i < n; i++){

        if ( arr[i] > fl){

            tl = sl;
            sl = fl;
            fl = arr[i];
        } else if ( arr[i] > sl) {

            tl = sl;
            sl = arr[i];
        }else if ( arr[i] > tl) {

            tl = arr[i];
        }

        if(arr[i] < min1) {
            min2 = min1;
            min1 = arr[i];
        }
        else if(arr[i] < min2) {
            min2 = arr[i];
        }
    }
     cout << fl << " " << sl  << " " << tl << endl;
     long long product1 = 1LL * fl *sl  * tl;
    long long product2 = 1LL * fl * min1 * min2;

    cout << max(product1, product2) << endl;



    return 0;
}