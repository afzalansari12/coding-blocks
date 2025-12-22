#include<iostream>
using namespace std;

int main(){

      string  s = " abcdefghi";
      

      cout << s.find("abc" )<< endl;
       cout << s.rfind("abc" )<< endl;
       cout << s.find(" def") << endl;
       cout << s.find("xyz") << endl;
       cout << string::npos << endl;

       if(s.find("xyz") ==string::npos){
         cout << "xyz is not present " << endl;
       }

     

       return 0;
    
}