#include<stdio.h>

double pow(double n , double p);
int main(){
    double n = 5, z , p =2;

    z = pow(n,p);
    printf("%lf",z);
putchar('\n');

    return 0;
}
double pow(double n ,double p){
  
    if(p==0){
        return 1;
    }else{
        return n*pow(n,p-1);
    }
}
























// #include <stdio.h>

// int power(int n, int p); // Renamed function to avoid conflict with <math.h>

// int main() {
//     int n = 5, z, p = 2;

//     z = power(n, p); // Call the corrected `power` function
//     printf("%d\n", z);

//     return 0;
// }

// int power(int n, int p) {
//     if (p == 0) {
//         return 1;
//     } else {
//         return n*power(n, p - 1);
//     }
// }
