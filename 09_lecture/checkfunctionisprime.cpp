// #include<iostream>
// #include<cmath>

// using namespace std;

// bool isPrime(int &n) {

// 	int sqN = sqrt(n);

// 	int i = 2;
// 	while (i <= sqN) {

// 		if (n % i == 0) {

// 			return false;

// 		}

// 		i++;

// 	}

// 	return true;

// }

// int main() {

// 	int n;
// 	cin >> n;

// 	isPrime(n) ? cout << n << " is prime" << endl : cout << n << " is not prime" << endl;

// 	return 0;
// }


#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int n){
    if(n < 2) return false;

    int sqN = sqrt(n);

    for(int i = 2; i <= sqN; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int m;
    cin >> m;

    for(int i = 2; i <= m; i++){
        if(isPrime(i)){
            cout << i << " ";
        }
    }

    return 0;
}