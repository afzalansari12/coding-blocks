#include<stdio.h>

int main(){

    int a, b;

    printf("enter the value of a and b");

    scanf("%d%d",&a,&b);

    (a==b)?printf("a is equal to b"): printf("a is not equal to b");

    putchar('\n');

    return 0;
}