#include<stdio.h>
int main(){

    
    
    int n , i = 0 , count = 0;
    int target = 30 ;
    printf("enter the value of n");
    scanf("%d",&n);
    int arr[n];
    for( i = 0; i < n; i++){

       
        scanf("%d",&arr[i]);

         
    }   
    for(i =0;i< n; i++){
         

      if(target == arr[i]){

         
         printf("%d target is found ", arr[i]);
         break;
        
      }
      else {

        printf(" target is not found ");
        
        }
        
         
    }
      

    putchar('\n');

 return 0;

}