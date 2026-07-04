#include<iostream>

using namespace std;
// class customer{
//     string name;
//     int age;
//     char gender;
//     double credits;
// };

// struct customer
// { 
//      string name;
//     int age;
//     char gender;
//     double credits;
// };

class customer{ 
public:
    string name;
    int age;
    char gender;
    double credits; 
};
void print(const customer& c){   // here cusomer object is pass by value we can pass it by reference also, 
 // we are making the const so we cant avoid the modification of customer class and pass it by reference .
 cout << "name =" <<  c.name <<endl
 << "age =" << c.age  
 << endl<< "gender =" << c.gender  
 << endl<< "credits =" 
 <<  c.credits << endl;
}
int main (){

    
 customer c1;
 customer c2;

    c1.age=20;
    c1.name= "afzal";
    c1.gender = 'M';
    c1.credits=500;

    print(c1);
 
//  cout << "name =" <<  c1.name <<endl
//  << "age =" <<   c1.age  
//  << endl<< "gender =" << c1.gender  
//  << endl<< "credits =" 
//  <<  c1.credits << endl;


 cin >> c2.name >> c2.age >> c2.gender >> c2.credits;
 print(c2);
// cout << "name =" <<  c2.name <<endl
//  << "age =" <<   c2.age  
//  << endl<< "gender =" << c2.gender  
//  << endl<< "credits =" 
//  <<  c2.credits << endl;
  return 0;
}