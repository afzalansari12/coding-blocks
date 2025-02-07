#include<stdio.h>
int main(){
    int a, b ;
    printf("enter the value of a and b ");
    scanf("%d%d", &a,&b);
    a = a +b;
    b = a- b;
    a = a - b;

     printf("a = %d and b = %d :  \n", a,b);
     return 0;

}