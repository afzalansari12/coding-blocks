#include<stdio.h>
int main(){

    int n ;
    printf("enter the value of n");
    scanf("%d",&n);
int m = n- n/2;
for( int i = 1; i <= m ; i++){

        for( int j = 1; j <= m -i; j++) {

            printf(" ");
        }
     for( int j = 1; j <= 2*i -1; j++){

           printf("*");
            
        }

        printf("\n");
    }

    for( int i = 1; i <= m - 1; i++){

        for( int j = 1; j <= i; j++){
            printf(" ");
            
        }

        for(int j = 1; j <= 2*( m - i) - 1; j++){ 
                printf("*");
               }

          printf("\n"); 
    }
return 0;

    
}





