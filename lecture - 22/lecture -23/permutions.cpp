

#include<iostream>
#include<
using  namespace std;

void f(char inp[], int i){

    if (inp[]== '\0'){

        cout << inp << endl;
        return;
    }

    int (int j = i;j < n;j++){

        swap(inp[i],inp[j]);
        f(inp, n, i+1);
        swap(inp[i],inp[j]);  //backtracking
    }

}

int main(){

    char inp[]= "abc";
    int n = strlen(inp);

    f(inp,n,0);

    return ;

}