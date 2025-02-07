#include<stdio.h>
int main(){
    int a , b ,c;

printf("enter number \n");


printf("before swapping numbers \n");

scanf("%d%d", &a,&b);
c = a;
a = b;
b = c;

printf("after swapping   %d %d\n", a , b);
return 0;


}


    