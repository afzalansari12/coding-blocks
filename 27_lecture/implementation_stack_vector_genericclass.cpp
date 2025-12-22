#include<iostream>
#include<vector>

using namespace std;
template <typename T>
class stack{
    public :
    vector<T> v;

   
    void push(T val){
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
   T top(){
    return v.back();

   }
   bool empty(){
    return v.empty();

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