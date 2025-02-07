#include<stdio.h>
union student{
    char name[100];
    int rollno;
    float marks ;

}s[1];

int main(){
    int i;
      
      printf("enter the name of student");

      for(i = 0; i < 1; i++){
        
        printf("enter the name of student ");

         scanf("%s",&s[i].name);
        
        printf("enter the roll no and marks of student ");
        scanf("%d%f",&s[i].rollno,&s[i].marks);
        
      }
      printf("display the record of student ");

        for(i = 0; i < 1;i++){
            if(s[i].marks > 69){
                 puts(s[i].name);
            }
}
            
     putchar('\n');
    return 0;
}