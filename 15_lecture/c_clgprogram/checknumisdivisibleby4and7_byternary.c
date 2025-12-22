#include<stdio.h>
int main(){
    int n;

    printf("enter the value of number");

    scanf("%d",&n);

    (n%4==0 && n%7== 0)?printf("number is divisible by 4 and 7"):printf("number is not divisible 4 and 7");

    putchar('\n');

    return 0;
}