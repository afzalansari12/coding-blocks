#include<iostream>
#include<string>


using namespace std;

int main(){
    string d = "abcdef";

    cout << d.substr(2,3) << endl;

    string substring = d.substr(1,4);
    cout << substring << endl;

    cout << d.substr(4) << endl;
    cout << d.substr(1, 100)<< endl;

    return 0;

}


