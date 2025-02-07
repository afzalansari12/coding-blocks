#include<stdio.h>
#include<string.h>
struct student {
    char name[100];
    int rollno,marks, age;

}s[5];

int main(){
    
      int i;
      
      for(i = 0; i < 5; i++){
        printf("name of student ");
        scanf("%s",&s[i].name);

       printf("rollno ");
       scanf("%d",&s[i].rollno);
       

       printf("marks ");
       scanf("%d",&s[i].marks);


       printf("age ");
       scanf("%d",&s[i].age);
}
  
  printf("Students with age > 18 and marks > 50:\n");
   for(i = 0; i < 5; i++){
   if(s[i].age > 18 && s[i].marks > 50){

     puts(s[i].name);
     printf("%d\n",s[i].rollno);
     printf("%d\n",s[i].marks);
     printf("%d\n",s[i].age);

      }
}
        return 0;
  }