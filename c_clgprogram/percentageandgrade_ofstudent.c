#include<stdio.h>

int main(){

    float m1, m2, m3, m4 ,m5 ,percentage, a, b , c, d, sum ;

    printf("enter the marks of student" );
    scanf("%f%f%f%f%f", &m1, &m2 , &m3 , &m4 , &m5);

    sum = m1 + m2+ m3 + m4 + m5;

    percentage = (sum/500)*100;

    if (percentage >= 90) {
        printf("grade = A ");
    }
        else if (percentage >= 80){

        
        printf(" grade = B");
        }

        else if (percentage >= 70 ) {
        
        printf(" grade = C");}

        else if (percentage >= 60 ) { 
     
        printf(" grade = D"); 
        }

        
    

    putchar('\n');
 return 0;

}