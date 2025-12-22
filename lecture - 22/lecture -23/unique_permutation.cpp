

#include<iostream>
#include<cstring>
#include<set>

using  namespace std;
set<string> s;

void f(char inp[],int n ,int i ){

    if(i == n){
        // cout << inp << endl;
        s.insert(string(inp));
        return;
    }

    for(int j =i; j <= n-1; j++){

        swap(inp[i],inp[j]);
        f(inp, n, i+1);
        swap(inp[i],inp[j]); // backtracking
        
    }

}

int main(){

    char inp[]= "aabc";
    int n = strlen(inp);

    f(inp, n, 0 ) ;
    for( string  uniqueperm : s){
         cout << uniqueperm << endl;
    }

    return 0;

}