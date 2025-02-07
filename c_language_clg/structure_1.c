#include<stdio.h>
#include<string.h>

struct student{

    char name[100];
    int roll_no;
    float marks;

} s;

int main(){
    
     
     printf("enter the name of student");
     gets(s.name);
     printf("enter the roll no of student");
     scanf("%d",&s.roll_no);
     printf("enter the marks of student ");
     scanf("%f",&s.marks);
      
      puts(s.name);

      printf("%d\n",s.roll_no);
      printf("%f\n",s.marks);
    return 0;
}