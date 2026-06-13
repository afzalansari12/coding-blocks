#include<stdio.h>
#include<math.h>

int main (){
    double p, r, t , amount, ci ;

    printf("enter the value of p , r and t");
    scanf("%lf%lf%lf", &p,&r,&t);


 amount =    p * ((pow((1 + r / 100), 
                    t)));
 ci = amount - p;

printf("enter the value of ci = %lf ", ci );

putchar('\n');
return 0;
}