#include<stdio.h>

int main(){

int a[100], n, i , t = 6 , cnt =0 ;

printf(" enter the value of  n ");

scanf("%d", &n);
printf("enter the element of array");

for(i = 0; i < n ; i++){

 scanf("%d",&a[i]);
 
}

for(i = 0; i < n ; i++){
     if(t == a[i]){

    cnt++;
   
}
    
}
if(cnt == 0){

    printf("element is not found");

}
else {
    printf(" element is found ");
}

putchar('\n');

return 0;
}