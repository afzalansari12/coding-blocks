#include<iostream>
using namespace std;
int main(){

    char ch;
    int x = 0;
    int y = 0;

    while(true){
       ch = cin.get();
        if(ch =='$')break;
    }
    if(ch == 'n'){
        y++;
    }else if(ch == 's'){
        y--;
    }else if(ch == 'w' ){
        x--;
    }else {x++;
    }

 cout << '(' << x << "," << y <<')' << endl;


       return 0;
}
