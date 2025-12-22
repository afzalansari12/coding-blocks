#include<stdio.h>


int main(){

  float km , m , cm , feet , inch;
printf("enter the value in kilometer =" );
scanf("%f" , &km);
m = km*1000;
cm = m*100;
inch = feet*12;
feet =km*3280.8;

printf("the  distance in meters is %f\n , centimeters is%f \n , inch is %f\n , feet is %f\n", m,cm, inch, feet );




}
