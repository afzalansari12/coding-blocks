#include<stdio.h>
#include<string.h>

struct student{
    char name[100];
    int roll_no, marks,totalmarks,avgmarks,maxmarks;
}s[50];

int main(){
       int roll_no, marks,totalmarks ,avgmarks,maxmarks;

    int i ,n;
    totalmarks = 0;
     printf("enter the value of n");
     scanf("%d",&n);
    for( i = 0; i <= n;i++){
        printf("enter the name of student");
        gets(s[i].name);
        printf("enter the roll no student ");

        scanf("%d"&s[i].roll_no);

     printf("enter the marks of students ");
        scanf("%d"&s[i].marks);

        totalmarks = totalmarks + s[i].marks;
        }
        
    return 0;
}