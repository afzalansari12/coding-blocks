#include<iostream>
using namespace std;

int f(string s,int n){

    string substring = s.substr(0, n-1);
    int integerfrommyfreind = f(substring , n - 1);
    return integerfrommyfreind * 10 + (s.back() - '0');

}

int main(){
    string str = "12345";
    int n = str.size();

    cout << f(str,n) << endl;
    return 0;
}