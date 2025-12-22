#include<stdio.h>

int main(){

    int a;
    
    printf("enter the value of a \n");
    scanf("%d", &a);

    if(a == 1){
        printf("monday");
    }
    else if(a == 2){
        printf("tuesday");

    }
    else if(a == 3){

        printf("wednesday");
    }
    else if (a == 3){
        printf("thursday");

    }
    else if ( a == 4){

        printf("friday");

    }
    else if( a == 5){

        printf("saturday");
    }
     else {
        printf("sunday");
     }

     putchar('\n');

     return 0;
    
    
    }