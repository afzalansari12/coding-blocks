#include<iostream>
#include<stack>

using namespace std;




bool isbalanced(const string& str){
    stack<char> s;
    for(char ch : str){

        switch(ch){
            case '(':s.push(ch); break;
            case '[':s.push(ch); break;
            case '{':s.push(ch); break;
            case ')':
            case ']':
            case '}':
           
        }
    }

}

int main(){


string str = "([{}])";
isbalanced(str) ? cout << "balanced!" << endl: cout << "not balanced!" << endl;


    return 0;
}