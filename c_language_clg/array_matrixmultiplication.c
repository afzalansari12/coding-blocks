#include<stdio.h>
int main(){
    int a[100][100],b[100][100], c[100][100], row, column, i , j , k;
    printf("enter the number of row = ");
    scanf("%d",&row);
    printf("enter the number of column = ");
    scanf("%d",&column);
    
    printf("enetr the element of matrix A");
    for(i = 0; i < row; i++){
        for(j = 0; j < column ; j++){

            scanf("%d",&a[i][j]);
        }
    }
    printf("enetr the element of matrix B");
    for(i = 0; i < row; i++){
        for(j = 0; j < column ; j++){

            scanf("%d",&b[i][j]);
        }
    }
     
     for(i = 0; i < row; i ++){

        for(j = 0; j < column; j++){

            c[i][j]= 0;
            for(k = 0; k < column ; k++ ){

                c[i][j] = c[i][j] + a[i][k]*b[k][j];
            }
        }
     }
     printf("matrix after multiplication");
      for(i = 0; i < row; i++){
        for(j =0; j < column ; j++){

            printf("\n%d\t ",c[i][j]);
        }

       printf("\n");
      }
      putchar('\n');
   
    return 0;
}


