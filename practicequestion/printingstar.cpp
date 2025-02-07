// #include<iostream>

// using namespace std;

// int main(){

//     int i = 4;

//     for(int i = 0 ; i<n; i++){
//         for(j =0; j < n -1-i; j++){

//             cout << " ";
//         }
//         cout << "*";

//         if ( !=0){

//             for(j = 0; j < 2*i -1; j++){

//                 cout << " ";
//             }

//             cout << "*";
//         }
//           cout << endl;
//     }
// //  bottom
//     for(int i = 0; i < n-1; i++){
//        for(int j=0; j<i+1; j++){

//         cout << " ";
//        }
//         cout << "*";
//         if(i != n-2){

//             for(int j= 0; j < 2*(n-1)-5; j++){

//                 cout << " ";
//             }

//             cout << "*";
//         }

    
// }
//     return 0;

// }

    
#include<iostream>

using namespace std;

int main() {

	int n;
	cin >> n;

	int i = 1;

	while (i <= n) {

		// for the ith row, print i nos.

		int j = 1;

		while (j <= i) {

			cout << j;
			j++;

		}

		cout << endl;

		i++;

	}

	return 0;

}
    
    

    