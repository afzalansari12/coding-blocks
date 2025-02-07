#include<stdio.h>
int main(){
    int n , a[10][10],b[10][10], i , j,cnt = 0 ;
     
     printf("enter the value of n = ");
     scanf("%d",&n);
     printf("enter the element of matrix A ");
     for(i = 0; i < n; i++){
        for(j = 0 ; j < n ; j++){
            scanf("%d", &a[i][j]);
            
        }
     }
      for(i = 0; i < n; i++){
        for(j = 0 ; j < n ; j++){
            
            b[j][i] = a[i][j] ;
            cnt++;
        }
     }
     printf("matrix  after transpose \n ");
     for(i = 0; i < n; i++){
        for(j= 0; j< n; j++){
            printf("%d\n",b[i][j]);
        }
     }
     if(cnt == 1){

        printf("matrix is symmetric");
     }else{

        printf("matrix is not symmetric");
     }
       putchar('\n');
    return 0;

}