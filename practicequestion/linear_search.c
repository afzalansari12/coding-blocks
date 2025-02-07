#include<stdio.h>
int main(){
      int n, i, t,cnt = 0;

      printf("enter the value of n");
       scanf("%d",&n);

      int arr[n];

      for(int i = 0; i< n ; i++){

        scanf("%d",&arr[i]);
      }
       printf("array is:");
      for(i =0; i< n;i++){
        printf("%d ",arr[i]);
      }
         
      for(i = 0; i < n; i++){
            t = 8;
        if(t == arr[i]){

           
            
            cnt++;
            if(cnt > 0){
            printf("\ntarget is found");


           
        }
        else{
            printf("\ntarget is not found");
            break;
        }
        
        
        
        
        }

      }
      putchar('\n');
   
    return 0;
}