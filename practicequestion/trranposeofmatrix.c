#include<stdio.h>
int main(){
    int a[10][10],b[10][10], i , n, j ; // variable declaration.

    printf("enter the velue of n");
    scanf("%d",&n);                                        // input the value of n
    printf("enter the elements of matrix 1 ");
    for(i = 0; i < n ; i++){
                                                    /* entering the element of  matrix */
        for(j = 0; j < n; j++){

            scanf("%d",&a[i][j]);
        }
    }
    
     for(i = 0; i < n; i++){
        for(j = 0; j < n ;j++){

            b[i][j]= a[j][i];                // transpose of matrix .
        }
     }

     printf("transpose of matrix ");
   for(i = 0; i<n;i++){
   for(j = 0; j < n; j++ ){
     printf("\n %d  ", b[i][j]);
    }
   }  
 putchar('\n');
 return 0;
 } // closing of main loop.