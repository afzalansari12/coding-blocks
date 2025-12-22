#include<iostream>
using namespace std;


int f(int n, char src, char dst,char hlp)

{
    if(n == 0){
        return 0;
    }

f(n - 1, src , hlp, dst);

cout << "move disk from " << src << " to " << dst << endl;

f(n - 1, hlp , src, dst);
return 0;
 
}
int main(){
     int n;
     cin >> n ;

    f(n , 'A','B', 'C'); 


    return 0;
}