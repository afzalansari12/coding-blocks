#include<stdio.h>

int main(){
   int arr[20],i , l , u, n,e, mid , cnt= 0 ;
   printf("enter the value of n");
   scanf("%d",&n);
   printf("elements");

   for(i = 0;i< n; i++){
    scanf("%d",&arr[i]);

   }
printf("enter the element to be searched ");
scanf("%d",&e);


   l = 0; 
   u = n - 1;

   while(l <= u){

    mid = (l + u)/ 2;
    if(e == arr[mid]){
    printf("element is found");
      cnt++;
        break;
       
    }

  else if( e < arr[mid]){
    u = mid - 1;
    
  
   }
   else {
     
    l = mid+ 1;

   }
   }
   
   if( cnt == 1){

    printf(" \n or item found");
   }

   else{
    printf("element is not found");
   }


 putchar('\n');
    return 0;
}