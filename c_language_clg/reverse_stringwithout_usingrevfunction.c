#include<stdio.h>
#include<string.h>

int main(){

    char str1[100] ,temp ;
    int i = 0,l = 0;
    printf("enter the string :");
    gets(str1);
    for(i = 0; i < str1[i]!= '\0'; i++){
        l = l + 1;
    }
    
    for(i = 0; i < l/2 ; i++){
    temp = str1[i];
    str1[i]=str1[l- i - 1];
    str1[l- i - 1] = temp;
     
     }
     printf("reverse string is:");
    puts(str1);

    return 0;
}