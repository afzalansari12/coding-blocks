
#include<iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int i =1;

    while ( i <= n){
        int num = 1%2 == 0 ? 0 : 1;

        int j = 1;

        while ( j <= i){

            cout << num;

            num = 1 - num;

            j++;





        }
        i++;

        cout << endl;

    }
    return 0;


}