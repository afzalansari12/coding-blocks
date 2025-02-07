#include<stdio.h>

int n, mul = 1;

int main(){
printf("enter the value of n ");
scanf("%d",&n);

for(int i = 1; i <= n; i++){

    mul=mul*i;
}
printf("%d",mul);

putchar('\n');

return 0;
 
}