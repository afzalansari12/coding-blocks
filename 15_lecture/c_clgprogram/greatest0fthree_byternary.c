#include<stdio.h>

int main(){

    int a,b,c, larg;


    printf("enter the value of a, b, and c");

    scanf("%d%d%d",&a,&b,&c);

    larg = (a>b)?((a>c)?a:c):((b>c)?b:c);

    printf("%d = is largest number . ", larg);

    putchar('\n');

    return 0;

}