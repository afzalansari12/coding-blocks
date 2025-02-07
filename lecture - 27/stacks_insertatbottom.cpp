#include<iostream>
#include<vector>
using namespace std;

void print(stack<int> s , int data){

    while (!s.empty()){
    cout << s.top() << endl;
    s.pop();
    
    }
    cout << endl;
}
int main (){
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    print(s);
    int data = 0; 
    insertatbotttom(s,data);

    print(s);



    return 0;
}