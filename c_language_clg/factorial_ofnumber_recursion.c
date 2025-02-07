#include<stdio.h>
int fact(int);
int main(){
    int n = 5 ,z ;
    z =fact(n);
    printf("fact is %d",z);
    return 0;
}
int fact(int a){
    if(a == 1 || a == 0){
        return 1;

    }else{
        return(a*fact(a - 1));
    }
    return 0;
    putchar('\n');
}