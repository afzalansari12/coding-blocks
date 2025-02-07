#include<stdio.h>

int main(){
    int n;
    float a,x,b, y;
    printf("enter the value of n");
    scanf("%d",&n);


    printf("enter the value of a,x,b");
    scanf("%f%f%f",&a,&b,&x);

    switch(n){
        
        case 1:
        y = a*x/b;
        printf("value of y is = %f",y);
        break;

        case 2:
        y = (a*x*x) + b*b;
        printf("value of y is = %f",y);
        break;

        case 3:
        y = a - b*x;
        printf("value of y is = %f",y);
        break;

        case 4:
        y =  a + x/b;
        printf("value of y is = %f",y);
        break;


        default :

        printf("n is not valid");




    }

    
   putchar('\n');



    return 0;
}
