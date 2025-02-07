#include<stdio.h>
#include<math.h>

int main(){

    int a , b, c, D, r1, r2;

    printf("enter the value of coefficients of quadratic equation a, b, c");

    scanf("%d%d%d",&a, &b,&c);

    D = (b*b - 4*a*c);

    if (D > 0){

        printf("roots are not equal ");

        r1 =(-b + sqrt(D)/ 2*a);
        r1 =(-b - sqrt(D)/ 2*a);

        printf("roots are  r1,r2 %d, %d", r1, r2);



    }
    else if (D ==0){

        r1 = (-b/ (2*a));
        r1 = (-b/ (2*a));
        printf("roots are %d,%d",r1, r2);

    }
    else {
    printf("roots are imaginary");
    }
    
    putchar('\n');

    return 0;
}