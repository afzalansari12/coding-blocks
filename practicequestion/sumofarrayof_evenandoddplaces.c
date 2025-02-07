#include<stdio.h>
int main(){

    int i , a[10],sum1 = 0, sum2 = 0 ,n;
    printf("enter the value of n");
    scanf("%d",&n);
    for(i = 0; i <=n ; i++){

        scanf("%d",&a[i]);
    }
    for(i = 0; i <= n ;i++ )
{

    if( i % 2== 0){

        sum1 = sum1 + a[i];

    }else{

        sum2 = sum2 + a[i];
    }
   
    


}
  printf("%d : is sum of even index . \n ", sum1);
printf("%d :is sum of odd index .  \n ", sum2);
    
putchar('\n');

    
  return 0;
}
