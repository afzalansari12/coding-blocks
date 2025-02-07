#include<stdio.h>
int main(){
    int a[10][10], i , n, j,sum = 0 ;     // variable declaration.

    printf("enter the value of n :");
    scanf("%d",&n);                                 // input the value of n
    printf("enter the elements of matrix : ");
    for(i = 0; i < n ; i++){
                                                    /* entering the element of  matrix */
        for(j = 0; j < n; j++){

            scanf("%d",&a[i][j]);
        }
            

    }

    for(i  = 0; i < n; i++){
                sum = sum + a[i][i];
            }
            printf("trace of matrix is : ");
            printf("%d",sum);
    putchar('\n');
    return 0;
}                                                     // closing of main loop.