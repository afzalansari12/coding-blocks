#include<stdio.h>
#include<string.h>
int main(){
    int i , ispalindrome = 1,ispalindrome1 = 1,temp,l, l1 = 0;
    char s[100];
    printf("enter string");
    gets(s);
    
   l = strlen(s);
   for(i = 0;i < l/2; i++){

       if(s[i] != s[l - i - 1]){
    ispalindrome = 0;
    break;
    }
   }
   if(ispalindrome){
    printf("string is palindrome");
   }else{
    printf("string is not palindrome");
   }
printf("\n");
     
char s1[100];

printf("enter string \n");
    gets(s1);
    
for(i = 0; s1[i]!= '\0';i++){

    l1= l1 +1;
}
for(i = 0;i < l1/2; i++){

       if(s1[i] != s1[l1 - i - 1]){
    ispalindrome1 = 0;
    break;
    }
   }
   if(ispalindrome1){
    printf("string is palindrome");
   }else{
    printf("string is not palindrome");
   }
putchar('\n');
    return 0;
}     