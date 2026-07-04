#include<iostream>
using namespace std;
class customer {
    public :
    string name;
    int age;
    char gender;
    double credits;

   void print(){
      cout << "name ="  <<   name   << endl
           << "age ="   <<  age     << endl
           << "gender ="<<  gender  << endl
           << "credits="<< credits  << endl;
    }
  
  //
    customer(string n, int a, char g,double c){  // constructor 
       name =n;
       age = a;
       gender = g;   
       credits = c;

    }

    int operator+(customer& c){
        return age +c.age;
    }

    int operator-(customer& c){
        return credits - c.age;
    }
   
};
    // function call operator overloading
bool cmp(customer a, customer b){ 
    if(a.age<b.age){
        return true;
    }else{
        return false;
    }
}
class agecmp{
    public:
  bool operator()(customer a , customer b){
       if(a.age>b.age){
        return true;
    }else{
        return false;
    }
  }

};
int main(){
  vector<customer> v;
v.push_back(customer("ramanujan",32,'M',1729));
v.push_back(customer("raman",33,'M',1730));
v.push_back(customer("anuj",34,'M',1731));
v.push_back(customer("ram",35,'M',1732));
v.push_back(customer("aman",36,'M',1733));

agecmp obj;

sort(v.begin(),v.end(),cmp);

sort(v.begin(),v.end(),obj);
sort(v.begin(),v.end(),greater<int>());


for(customer c:v){
    cout << c.name << " " << c.age << endl;
}
return 0;
}