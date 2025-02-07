#include<stdio.h>
int main() {

float BS , DA , GS , PF , HRA, Net_salary;
printf("enter value of BS =");
scanf("%f",  &BS);

    DA = 0.25*BS;
    HRA = 0.15*BS;
    GS =  BS + HRA +  DA;
    PF = 0.10*GS;
    Net_salary = GS - PF;
    printf("Net salary = %f",Net_salary );

    putchar ('\n');
      
    return 0;
}
