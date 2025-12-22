#include<stdio.h>

int main(){
    int n, a , b , c, sum ;

    printf("enter the value of number ");
    scanf("%d",&n);

    a = n%10;
    n = n/10;
    b = n%10;
    n = n/10;
    c = n%10;

    sum = a+ b+ c;

    printf("enter the value of sum = %d", sum);

    putchar('\n');

    return 0;


}