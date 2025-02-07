#include<stdio.h>
#include<math.h>

int main(){
    double fahrenheit, degree ;

    printf("enter the value of temperature in fahrenheit");
    scanf("%lf",&fahrenheit);

    degree = (5.0/9.0)*(fahrenheit - 32);

    printf("value of temperature in degree = %lf ", degree);
    
    putchar('\n');

    
    return 0;

}