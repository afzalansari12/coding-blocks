#include<iostream>
#include<stack>

using namespace std;

class custom_stack {

	stack<int> main_stack;
	stack<int> min_stack;

public :

	void push(int val) {
        main_stack.push(val);
        if(min_stack.empty()  || val <= min_stack.top() ){
            min_stack.pop();
        }
	}

	void pop() {
         int temp = main_stack.top();
         main_stack.top();
         if(min_stack.top() == temp){
            min_stack.pop();
         }
	}

	int size() {
         return main_stack.size();
	}

	bool empty() {
          return main_stack.empty();
	}

	int top() {
     return main_stack.top();
	}

	int getMin() {
        return min_stack.top();
	}

};

int main() {

	custom_stack cs;
 
     cs.push(10);
     cs.push(20);
     
	 cout << cs.getMin() << endl;

	return 0;
}