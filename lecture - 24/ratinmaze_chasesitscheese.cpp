#include<iostream>
using namespace std;

if(i == m || j == n || i == -1 || j == -1){
    return ;

}
if (maze[i][j] == 'x'){
    return;
}
if(i == m - 1 and j == n - 1){
    path[i][j] = '1';
    printpath(path,m ,n);
    path[i][j] = '0';
    return;
}

path[i][j] ='1';
path



int main(){
    
    
    
    
    
    return 0;

}