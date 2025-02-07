#include<stdio.h>
#include<string.h>

struct student{
char name[100];
int mobile_no, yearofbirth;
float marks , fees_deposited;
} s1,s2, s3;
int main(){

printf("enter the name of students");

gets(s1.name);
gets(s2.name);
gets(s3.name);

printf("enter the mobile no of students");
scanf("%d%d%d",&s1.mobile_no,&s2.mobile_no,&s3.mobile_no);

// printf("enter the roll no. of students");
// scanf("%d%d%d",&s1.roll_no,&s2.roll_no,&s3.roll_no);

printf("enter the year of birth of students");
scanf("%d%d%d",&s1.yearofbirth,&s2.yearofbirth,&s3.yearofbirth);

printf("enter the marks of students");
scanf("%f%f%f",&s1.marks,&s2.marks,&s3.marks);

printf("enter the fees deposited of students");
scanf("%f%f%f",&s1.fees_deposited,&s2.fees_deposited,&s3.fees_deposited);
printf("record of student after verification");
if( s1.fees_deposited < 5000 || s1.yearofbirth > 2005 ){
 puts(s1.name);
    printf("%f", s1.marks);
}
 if (s2.fees_deposited < 5000 || s2.yearofbirth > 2005){
    puts(s2.name);
    printf("%f", s2.marks);
} if (s3.fees_deposited < 5000 || s3.yearofbirth > 2005){
    puts(s3.name);
    printf("%f", s3.marks);
} if(s1.fees_deposited >= 5000 && s2.fees_deposited >= 5000 && s3.fees_deposited >= 5000 &&
        s1.yearofbirth <= 2005 && s2.yearofbirth <= 2005 && s3.yearofbirth <= 2005){
    printf(" student is deposited fees more than 5000");
}


putchar('\n');
return 0;
}

    

