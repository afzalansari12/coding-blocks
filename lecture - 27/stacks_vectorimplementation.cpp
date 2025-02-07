#include<iostream>

#include<vector>


using namespace std;

class stack {
    vector<int> v;

    public:
    void push(int val){
        v.push_back(val);
    }

    void pop(){
        v.pop_back(val);
    }
    it size() {
        return v.size();
    }

    int top(){

        return v.back():


    }
    bool empty() {
        return v.empty();
    }
};

int main(){

    stack s;
   
    cout << "size : " << s.size() << endl;
    cout << "is empty : " << s.empty() << endl;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    
}













