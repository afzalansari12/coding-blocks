#include<stdio.h>
int main(){

    int n; 
    float rev, a, b,c,x;
    printf("enter the value of num");
    scanf("%d",&n);
    x = n;
    a = n%10;
    n = n/10;
    b = n%10;
    n = n/10;
    c = n%10;
      
   rev = a*100 + b*10 + c;
    

    if(rev == x){

        printf(" number is palindrome ");

    }
    else{
        printf("number is not palindrome ");

    }
 
     putchar('\n');

    return 0;

}