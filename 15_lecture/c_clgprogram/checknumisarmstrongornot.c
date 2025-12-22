
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

    rev = a*a*a + b*b*b + c*c*c;

   ( x == rev)?printf("n is armstrong "): printf("n is not arsmstrong");

   putchar('\n');

  return 0;

}


#include<stdio.h>

int main(){
    int n 
}
