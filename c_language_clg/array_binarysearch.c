// #include<stdio.h>
// int main(){
// int a[100], i , n ,l  , u, mid,t , cnt =0;
//     printf("enter the value of n");
//     scanf("%d", &n);

//     printf("enter the element of array");

//     for(i = 0; i < n; i++){

//         scanf("%d", &a[i]);
//     }
//     printf("element to be searched");
//     scanf("%d",&t);
//     l = 0;
//     u = n - 1;
//     while(l < u){

//         mid = (l+ u)/2;
//         if(t == a[mid])
//         {
//          cnt++;
//          break;
//         }
//         else if(t < a[mid]){
//             u = mid - 1;
//         }
//         else {
//             l = mid + 1;
            
//         }
//         //  else if(t > a[mid]){

//             l = mid + 1
//          }
//     }
//     if(cnt == 1){
//         printf("elemnt is found ");

//     }else{
//        printf("element is not found");
//     }

//     putchar('\n');
//     return 0;
// }