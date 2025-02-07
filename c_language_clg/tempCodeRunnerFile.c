#include<stdio.h>

int power(int n , int p);
int main(){
    int n = 5, z , p =2;

    z = pow(n,p);
    printf("%d",z);


    return 0;
}
int pow(int n ,int p){
  
    if(p==0){
        return 1;
    }else{
        return n*pow(n,p-1);
    }
}