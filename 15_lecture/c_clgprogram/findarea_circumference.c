#include<stdio.h>

int main(){
 float PI = 3.14;
int r ;
float area ,ci;

printf("enter the radius :");
scanf("%d", &r);
 area = PI*r*r;
 printf("area  =%f \n", area);

 ci = 2*PI*r;

 printf("ci = %f \n" , ci);

return 0;

}
