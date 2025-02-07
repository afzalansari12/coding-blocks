#include<stdio.h>
int fact();

int main(){
    int x;
    
x =  fact();
printf("%d",x);

    return 0;
}
int fact(){
int fact = 1,n,i=1;
printf ("enter the value of n");
    scanf("%d",&n);
    for(i = 1;i<=n;i++){
        fact = fact*i;
        
    }

    return(fact);
}
