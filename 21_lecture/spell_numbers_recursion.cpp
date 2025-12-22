#include<iostream>
using namespace std;
string spellingmap[] = {
    " zero","one", " two", "three", "four","five","six","seven","eight"," nine"
};
void f(int n){
    if(n == 0){
        return ;
    }

f(n/10);

int d = n%10;

cout << spellingmap[d] << " ";


    
}
int main(){
    int n;
    cin >> n;
     f(n) ;
    return 0;
}