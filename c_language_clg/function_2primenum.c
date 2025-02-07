#include<stdio.h>
int prime(int n);

int main(){
int x , n;
printf("enter number");
scanf("%d",&n);
x = prime(n);
if(x==1){
    printf("prime");

}else{

    printf("not prime");
}

putchar('\n');
}
int prime(int n){
    for(int i = 2; i <= n/2;i++){

        if(n%i == 0){
            return 0;

        }else{
            return 1;
        }
    }

    return 0;
}