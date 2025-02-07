#include<iostream>
using namespace std;
void printpath(char path [][10], int m, int n)

void f(char maze [][10], int m, int n, int i , int j){
    if(i == m || j == n){
        return ;

    }
    if(maze[i][j]=='x'){
        return;
    }

    if(i == m - 1 and j == n - 1){
        printpath(path,m,n);
        return;
    }
    path[i][j] ='1';
    f(maze, path, m,n,i,j+1);
    f(maze,path,m,n,i+1,j);
    path[i][j] = '0';
}

int main(){

    char maze[][10] = {
        "0000",
        "00x0",
        "000x",
        "0x00"
    };

    char path[][10]={
        "0000",
        "0000",
        "0000",
        "0000"

    };

    int m = 4;
    int n = 4;
    f(maze, path, m, n, 0,0);
    
    return 0;
}
