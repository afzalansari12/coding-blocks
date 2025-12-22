#include<iostream>
#include<deque>

using namespace std;
template <typename T>

class stack{
    public :
    deque<T> d;

   
    void push(T val){
       d.push_back(val);
    }
    void pop(){
     if(empty()){
        return;
     }
     return d.pop_back();
    }

    int size(){

return d.size();
    }
   T top(){
    return d.back();

   }
   bool empty(){
    return d.empty();

   }
};

int main(){

    stack <int> s;

    cout << " size :" <<  s.size() << endl;
    // cout << "top : " << s.top() << endl;
    cout << "is empty ? " << s.empty() << endl;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    cout << " size :" <<  s.size() << endl;
    cout << "top : " << s.top() << endl;
    cout << "is empty ? " << s.empty() << endl;

    s.pop();

    cout << "size :" <<  s.size() << endl;
    cout << "top :" << s.top() << endl;

    s.pop();

    cout << "size :" << s.size() << endl;
    cout << " top :" << s.top() << endl;

    s.pop();
    cout << "size :" << s.size() << endl;
    cout << " top :" << s.top() << endl;

    s.pop();
    cout << "size :" << s.size() << endl;
    cout << "is empty ? " << s.empty() << endl;

    return 0;

}