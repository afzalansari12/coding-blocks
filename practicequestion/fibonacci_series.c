#include<stdio.h>
int fibonacci(int n);
int main(){
    int n ;
    printf("enter the value of n ");
    scanf("%d",&n);

    int fibonacci(int n);

    for(int i = 0 ; i < n ; i++){
        printf("%d  \n",fibonacci(i));
    }
    return 0;
}
int fibonacci(int n){
    if(n == 0 || n == 1){
    return n;
    }
     else  
     return (fibonacci(n - 1) + fibonacci(n - 2) );
    }

