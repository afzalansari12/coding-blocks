#include<stdio.h>
int main(){
    int n, x , a ,b ,c,rev;

    printf("enter the value of n");
    scanf("%d",&n);

    x = n;
    a = n%10;
    n = n/10;
    b = n %10;
    n = n / 10;
    c = n %10;

    rev = a*100 + b*10 + c;

   ( x == rev)?printf("n is palindrome "): printf("n is not palindrome");

   putchar('\n');

  return 0;

}