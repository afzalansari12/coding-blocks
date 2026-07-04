#include<iostream>

using namespace std;

class customer {
    public :
    string name;
    int age;
    char gender;
    double credits;

void print(){
 cout << "name =" <<  name <<endl
 << "age =" <<   age  
 << endl<< "gender =" << gender  
 << endl<< "credits =" 
 << credits << endl;
    }
     customer(string n, int a, char g,double c){  // constructor 
       name =n;
       age = a;
       gender = g;   
       credits = c;

    }
};

int main(){
      customer c("raman",32,'M',450);

      cout << &c << endl;
      customer* cptr = &c;
      cout << cptr << endl;

      cout << " name" << (*cptr).name << cptr->name << endl;
     // -> access member 
 return 0;

}