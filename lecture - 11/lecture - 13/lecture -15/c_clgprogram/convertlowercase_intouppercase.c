#include<stdio.h>

int main(){

    char ch ;
    printf("enter character from user ");

    scanf("%c",&ch);

    if(ch>= 'A' && ch<= 'Z')

    {
        printf("uppercase");

        ch+= 32;

        printf("lowercase %c", ch);

    }
    else if (ch>= 'a' && ch <= 'z')

    {
        printf("lowercase");

        ch-= 32;

        printf("uppercase %c",ch);

    }

    else if (ch <= '0' && ch <= '9')

    {

        printf(" digits");

    }
    else {
        printf("special character");

    }
 putchar('\n');


return 0;

    
}