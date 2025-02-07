#include<stdio.h>

int main(){

    int n ;
    int fact;

    fact = 1;
    scanf("%d",&n);

    for(int i = 1; i <= n; i++){

        fact=fact*i;

        
    }

     printf("%d",fact);
     putchar('\n');

    return 0;
}

