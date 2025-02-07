#include<stdio.h>

int main(){
    int n ,fact;

    printf("enter the value of n");
    scanf("%d",&n);
     fact = 1;
    for(int i = 1; i <=n; i++){
       
    fact = i*fact;
    // fact++;




    }

printf("%d",fact);
putchar('\n');

    return 0;

}