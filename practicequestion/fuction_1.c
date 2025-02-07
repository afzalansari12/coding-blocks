#include<stdio.h>

void sum();
int main(){

    sum();

    return 0;
}
void sum(){
    int a , b ,sum;
    printf("enter the value of a and b");
    scanf("%d%d",&a,&b);
// int a , b ,sum;
sum = a+ b;
printf("sum is ");
printf("%d",sum);
putchar('\n');
}
