#include<stdio.h>

int main(){

    int base , pow ;
    int result = 1;

    printf("enter the value of pow and base");
    scanf("%d%d",&base,&pow);

    for(int i = 1; i <= pow; i++){

        result = result*base;
    }
    printf("result is %d",result);

     putchar('\n');
    return 0;
}
