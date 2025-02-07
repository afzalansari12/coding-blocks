#include<stdio.h>
#include<string.h>
int main(){
     
     char str1[100],str2[100];
     int l = 0,i;
     printf("enter the string 1 :");
     gets(str1);
     printf("enter the string 2");
     gets(str2);

     for( i = 0; str1[i]!= '\0'; i++){
        l = l + 1;

     }

     for(i = 0; str2[i] != '\0'; i++){

        str1[l + i] = str2[i];

     }
     str1[ l + i ] = '\0';

     puts(str1);
     puts(str2);

    return 0;
}
