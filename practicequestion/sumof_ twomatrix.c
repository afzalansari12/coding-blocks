#include<stdio.h>
int main(){
    int a[10][10],b[10][10],c[10][10], i , n, j ; // variable declaration.

    printf("enter the velue of n");
    scanf("%d%d",&row,&column);                                        // input the value of n
    printf("enter the elements of matrix 1 ");
    for(i = 0; i < n ; i++){
                                                    /* entering the element of 1 matrix */
        for(j = 0; j < n; j++){

            scanf("%d",&a[i][j]);

        }
    }
    printf("enter the elements of matrix 2");
    for(i = 0; i < n; i++){
                                                    /* entering the element of 2 matrix */
        for(j = 0; j < n; j++){

            scanf("%d",&b[i][j]);

        }
    }
     for(i = 0; i < n; i++){
        for(j = 0; j < n ;j++){

            c[i][j]= a[i][j] + b[i][j];                // addition of matrix .
        }
     }

    





}