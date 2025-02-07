#include<stdio.h>

struct student{
    char name[100];
    int rollno,marks;

} s1,s2,s3;

int main(){
printf("enter teh name of student");
gets(s1.name);
gets(s2.name);
gets(s3.name);

printf("enter the roll no of student");
scanf("%d%d%d",&s1.rollno,&s2.rollno,&s3.rollno);
printf("enter the marks of student");
scanf("%d%d%d",&s1.marks,&s2.marks,&s3.marks);

if(s1.marks > 50){
    puts(s1.name);
    printf("%d%d\n\n",s1.rollno,s1.marks);
}
if(s2.marks > 50){
    puts(s2.name);
    printf("%d%d\n\n",s2.rollno,s2.marks);
}
if(s3.marks > 50){
    puts(s3.name);
    printf("%d%d\n\n",s3.rollno,s3.marks);
}
putchar('\n');

    return 0;
}