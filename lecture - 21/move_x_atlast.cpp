#include<iostream>
using namespace std ;

string f(string str){
    if (str.empty()) return "";
    
    
    char firstChar = str[0]; 
    string remainingStr = f(str.substr(1)); 
    
    
    if (firstChar == 'x') {
        return remainingStr + 'x';
    } else { 
        return firstChar + remainingStr;
    }

}
int main(){

  string str = "axbxcxx";


  cout << f(str) << endl;

    return 0;

}