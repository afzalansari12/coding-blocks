#include<iostream>

using namespace std;

int main(){

      int x = 10;
      cout << " x = " << x <<  endl;
      cout << "&x = " << &x << endl;

      cout << "sizeof(&x) =" << sizeof(&x) << "B" << endl;

      cout <<  endl;


      char ch = 'A';
      cout << "ch =" << ch << endl;
      // cout << "&ch =" << &ch << endl;
      cout << "sizeof(ch) = " << sizeof(ch) << endl;
      cout << "&ch =" << &ch << endl;
      cout << "sizeof(&ch)= " << sizeof(&ch) << endl;

 return 0;

}