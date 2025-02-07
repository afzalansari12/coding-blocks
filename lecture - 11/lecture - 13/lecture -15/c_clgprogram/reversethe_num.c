#include<stdio.h>
int main(){
    int rev , n , a, b , c;

    printf("enter the value of number");
    scanf("%d", &n);

    a = n%10;
    n = n/10;
    b = n%10;
    n = n/10;
    c= n%10;

    rev = a*100 + b*10 + c;

printf("reverse of number is %d", rev); 
putchar('\n'); 
    
    return 0;

}