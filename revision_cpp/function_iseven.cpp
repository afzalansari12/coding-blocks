#include<iostream>
using namespace std;
bool iseven(int x){
    return x%2 == 0;
}
    
int main(){
    bool ans = iseven(3);
    cout << ans << endl;
   
   cout <<  iseven(2) << endl;
    
    return 0;
}