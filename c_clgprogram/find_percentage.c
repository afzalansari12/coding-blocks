#include<stdio.h>

int main(){

    float m1, m2, m3, m4, m5, sum , per;
    printf("enter the marks of student :");
    scanf("%f%f%f%f%f", &m1,&m2,&m3,&m4,&m5);
    sum = m1+m2+m3+m4+m5;
    per =(sum/500)*100;
    printf("percentage   is  %f ",per);
    return 0;

}
