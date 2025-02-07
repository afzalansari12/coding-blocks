#include<stdio.h>

int main(){
    int a , b , sum , n;

    printf("enter the value of number");
    scanf("%d",&n);

    a = n %10;
    n = n/10000;

    sum = a+n;
     printf("sum = %d", sum);
     
     putchar('\n');

     return 0;
}