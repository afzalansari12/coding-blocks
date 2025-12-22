#include<stdio.h>

int main(){

   int  p, t, r;
   float si;

    printf("enter valueof p,tand r");


    scanf("%d%d%d" ,&p,&r,&t);
    si = p*r*t/ 100;
    printf("si = %f \n", si);
    return 0;

}

