#include<stdio.h>
#include<math.h>
int main(){
    int n, x ,fact= 1 ;
    float series;
       printf("enter the value of n and  n is greater than equal to 2 ");
    scanf("%d",&n);

    printf("enter the value of  x");
    scanf("%d",&x);

       if(n == 1 || x == 1  ){
        printf("sum is zero");
            return 0;}

    
       int i = 2;
    for( i = 2; i <= n; i++ ){
           fact = fact*i;
          series = (pow(-1,i)*pow(x,i)/fact ) + 1;
    }
    printf( "%f   = sum of series  " ,series);
    putchar('\n');
     return 0;
}