#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    printf("enter the string ");
    gets(str);
    int l = strlen(str), ispalindrome = 1;
    
    for(int i = 0; i < l/2; i++){

    if(str[i]!= str[l - i - 1]){
        ispalindrome= 0;
        break;
       }   
    }
    if(ispalindrome){
        printf("string is palindrome");
    }else{
        printf("string is not palindrome");
    }
    putchar('\n');
       return 0;
}


