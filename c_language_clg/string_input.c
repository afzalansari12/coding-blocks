#include<stdio.h>
#include<string.h>
int main(){
    char str1[50],str2[50],str3[100],str4[100];
    printf("enter the string 1:");
    gets(str1);
    printf("enter the string 2:");
    gets(str2);
    printf("length of strings\n");
     int l1 = strlen(str1);
     int l2 = strlen(str2);
    printf("%d\n",l1);
     printf("%d\n",l2);
     printf("string after the concatenation\n");
    strcat(str1,str2);
    puts(str1);
    strcpy(str1,str2);
     printf("string after the copy\n");
     puts(str1);
printf("enter the string 3 and 4");
gets(str3);
gets(str4);
printf("string after the comparison\n");
    int t = strcmp(str3,str4);
  if(t == 0){
    printf("strings are equal");
   }else if(t > 0){
    printf("string 1 is greater");
  }else{
    printf("string 2 is greater ");
}
    putchar('\n');
    return 0;
}