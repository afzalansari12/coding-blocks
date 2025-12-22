#include<iostream>

using namespace std;

class customer {
    public :
    string name;
    int age;
    char gender;
    double credits;


};

int main(){
       customer c1;

       c1.name = "afzal";
       c1.age = 19; 
       c1.gender = 'M';
       c1.credits = 500;


       cout << " name = " <<  c1.name << endl;
       cout << "age = " << c1.age << endl;
       cout << " gender " << c1.gender << endl;
       cout << " credits " << c1.credits << endl;


   
 return 0;



}