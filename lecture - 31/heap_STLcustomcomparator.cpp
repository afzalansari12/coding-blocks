#include<iostream>
using namespace std;
class customer{
    public:
    string name;
    int age;
    double credits;
    customer(string, age , credits);

}

int main(){

    priority_queue<customer, vector<customer>,customeragecomp> m;
    m.push(customer("rahul", 20, 200));
    m.push(customer("vaibhav", 21, 100));
    m.push(customer("yukta", 18, 700));
    m.push(customer("aditya", 17, 800));
    m.push(customer("parv", 19, 1000));
    cout << m.size() << endl;

    while
    


    return 0;
}