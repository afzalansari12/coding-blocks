#include<iostream>
#include<vector>

using namespace std;
class stack{
    public :
    vector<int> v;

   
    void push(int val){
       v.push_back(val);
    }
    void pop(){
     if(empty()){
        return;
     }
     return v.pop_back();
    }

    int size(){

return v.size();
    }
   int top(){
    return v.back();

   }
   bool empty(){
    return v.empty();

   }
};

int main(){

    stack s;

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