#include<stdio.h>
#include<math.h>

int main(){

   float length, width, area , perimeter;
   printf("Enter the length of the rectangle: ");
   scanf("%f", &length);
   printf("Enter the width of the rectangle: ");
   scanf("%f", &width);
   area = length * width;
   printf("The area of the rectangle is: %f\n", area);
    
    float side ;

    printf("side of square ");
    scanf("%f",&side);
    area = side*side;

    printf("value of area = %f",area );

     perimeter = 2*(length + width);

     printf("value of perimeter of rectangle  = %f", perimeter );
        
        perimeter  = 4*side;
     printf(" perimeter of square = %f ", perimeter);
    
       

       
       
       
       
       
       
       
       putchar('\n');


    return 0;


}