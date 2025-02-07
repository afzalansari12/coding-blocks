#include<stdio.h>
#include<string.h>
int main(){
 int i ,l1, l2;
 char str1[100],str2[100];
 printf("enter the string 1 ");
 gets(str1);
 for(i = 0; str1[i] != '\0'; i++){
    l1 = l1 +1;
}
 printf("enter the string 2 ");
 gets(str2);  

for(i = 0; str2[i] != '\0'; i++){
    l2 = l2 +1;
}

if(l1 > l2){
    printf("1");
} else if( l1 == l2){

    printf("0");
}else{
    printf("-1");
}
putchar('\n');
return 0;

}