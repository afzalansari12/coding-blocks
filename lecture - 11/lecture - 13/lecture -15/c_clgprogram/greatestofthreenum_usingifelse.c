#include<stdio.h>

int main(){

    int a , b , c ,larg;

    printf("enter the value of a , b and c");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b && a>c){

        printf( "a is greater than b and c ");

    }
    if(b>c && b>a){ printf("b is greater than a and c");
    
    } else {

        printf("c is the greater than a and b");
    }

    putchar('\n');

    return 0;


}