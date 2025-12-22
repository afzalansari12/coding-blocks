#include<stdio.h>

int main(){

    int year;

    printf("enter the year");
    scanf("%d",&year);

    (year%4 == 0) &&( year % 400 == 0 || year % 100 != 0) ? printf("given year is leap year ") : printf("given year is not leap year");
      
     putchar('\n');  
     
     return 0;

}
