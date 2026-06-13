#include<stdio.h>



int main(){

    int l , w, ar , pr;

    printf("lenght and breath :\n");
    scanf("%d%d",&l,&w);
    ar = l*w;

    pr = 2*(l+w);

    printf(" ar= %d\npr = %d\n" ,ar ,pr );

    return 0;


}