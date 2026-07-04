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
     customer* cptr1 = new customer;
     cin >> cptr1->name >> cptr1->age >> cptr1->credits >> cptr1->gender;
     cptr1->print();

    customer* cptr2 = new customer("raman",23,'M',899);

    cptr2->print();

    delete cptr1;
    delete cptr2;

 return 0;

}