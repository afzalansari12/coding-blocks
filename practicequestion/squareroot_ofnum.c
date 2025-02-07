// #include<iostream>

// using namespace std;

// int main(){
//     int n ;
//     cin >> n ;
//       int sqrt = 0;

//       while(
//         sqrt*sqrt <= n;

//         sqrt = sqrt + 1;



//       )

//       sqrt = sqrt - 1;

//       cout << sqrt << endl;

//       return 0;
// }
#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) return 0;         // Numbers less than or equal to 1 are not prime
    if (num == 2) return 1;          // 2 is prime
    if (num % 2 == 0) return 0;      // Even numbers greater than 2 are not prime

    for (int i = 3; i * i <= num; i += 2) {  // Check odd divisors up to square root of num
        if (num % i == 0) return 0;
    }
    return 1;  // If no divisors found, number is prime
}

int main() {
    printf("Prime numbers between 1 and 300 are:\n");
    for (int i = 1; i <= 300; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
