#include<stdio.h>

int main(){


    int n ,a , b ,rev;

    scanf("%d",&n);

    a = n%10;
    n= n/10;
    b= n%10;
    n=n/10;

    rev = a*100 + b*10 + n ;

    printf("%d", rev);
    

    
    return 0;
}