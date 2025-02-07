#include<iostream>
using namespace std;

// int cnt = 0;
bool f(char maze [][10], int m, int n, int i , int j){


if(i == m || j == n){
    return false;
}



if(maze[i][j]=='x'){

    return false;
}

if (i == m- 1 and j == n- 1){
    // cnt++;
    return true;
}

// bool x = f(maze, m,n,i,j+1);
// bool y = f(maze,m,n,i+1,j);

// return x or y;

return f(maze , m , n,i,j+1) or f(maze,m,n,i+1,j);

}


int main(){
    char maze[][10] = {
      "0000",
      "00x0",
      "000x",
      "0x00"
    };

    int m = 4; 
    int n = 4;

    f(maze , m, n,0,0) ? cout << "path exists" << endl: cout << "path doesn't exists" << endl;
     
    //  cout << cnt << endl;


    return 0;
}