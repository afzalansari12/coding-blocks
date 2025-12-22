#include<iostream>
using namespace std;

void greet(){

    cout << " hello world " << endl;

}
int main() {
    cout << " i am inside main() , before calling greet()" << endl;
    greet();
    cout << " i am inside main(), after calling greet()" << endl;

    return 0;
}



 

 