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
    customer() {
        name = "";
        age = 0;
        gender = ' ';
        credits = 0;
    }
};

int main(){
   

   customer c1("raman",23,'M',899);

    

 return 0;

}