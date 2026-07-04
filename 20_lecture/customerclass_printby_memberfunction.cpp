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
};

int main(){
       customer c1;

       c1.name = "afzal";
       c1.age = 19; 
       c1.gender = 'M';
       c1.credits = 500;
    
       c1.print();

      customer c2;

       c2.name = "afzal";
       c2.age = 19; 
       c2.gender = 'M';
       c2.credits = 500;
   
 return 0;



}