#include<iostream>
#include<map>
#include<vector>
#include<string>
using namespace std;
int main(){
    map<string,vector<string>> phonemap;
    phonemap["aditya"].push_back("0000");
    phonemap["aditya"].push_back("1111");
    phonemap["aditya"].push_back("2222");

    phonemap["yukta"].push_back("1234");
    phonemap["yukta"].push_back("5678");

    phonemap["aryan"].push_back("9876");

    for(pair <string,vector<string>> contact : phonemap){

        string contactname = contact.first;
        vector<string> phonenums = contact.second;

        cout << contactname << " : ";
        for(string num: phonenums){
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
