#include<stdio.h>
#include<string.h>


struct student {
    char name[100];
    int rollno,marks;

}s[10];

int main(){
    int i , x,max = s[0].marks;
    printf("enter the record of student");
     for(i = 0; i < 2; i++){
        gets(s[i].name);
        scanf("%d%d",&s[i].rollno,&s[i].marks);
     }

     for(i = 0; i < 2 ; i++){
        if(s[i].marks > max){
        max = s[i].marks;
        x= i;
        }
     }
     
     puts(s[x].name);
     printf("%d%d\n",s[x].rollno,s[x].marks);
     putchar('\n');
    return 0;
}