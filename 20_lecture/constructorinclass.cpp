#include<iostream>
using namespace std;
class customer {
    public :
    string name;
    int age;
    char gender;
    double credits;

    customer(){
        // cout << "i m insidde the default constructor of customer class";
    }

   void print(){
      cout << "name ="  <<   name   << endl
           << "age ="   <<  age     << endl
           << "gender ="<<  gender  << endl
           << "credits="<< credits  << endl;
    }

    customer(string n, int a, char g,double c){  // constructor 
       name =n;
       age = a;
       gender = g;   
       credits = c;

    }
    // ~customer(){
        // cout << "i m insidde the default destructor of customer class";
       
    // }
};

int main(){
cout << endl;

customer c1("ramanujan",32,'M',1729);
c1.print();

cout << endl;
customer c2("raman",32,'M',17290);
c2.print();
customer c3;
return 0;
}