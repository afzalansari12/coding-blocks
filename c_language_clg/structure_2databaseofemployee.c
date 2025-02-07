#include<stdio.h>
#include<string.h>
struct employe{
    char name[100];
    float salary;
    int emp_id;
}e;

int main(){
    printf("enter the name of employe");
    gets(e.name);
    printf("enter the salary of employe");
    scanf("%f",&e.salary);
    printf("enter the employe ID");
    scanf("%d",&e.emp_id);

    if(e.salary > 20000){
        puts(e.name);
        printf("%f\n%d\n",e.salary,e.emp_id);

    }else{
        printf("salary of employe is less than 20000");

    }
    putchar('\n');

    return 0;
}