#include<iostream>
using namespace std;
bool isgood(string str){
    
    for(int i = 0; i < str.size();i++){
        if(str[i] != 'i' && str[i] != 'a' && str[i] != 'e'&&str[i] != 'o'&&str[i] != 'u'){
               cout << "not good";
                return false;            
        }
    }
    cout << "good";
    return true;

}
int main(){
    string str;
    cin >> str;
    isgood(str);
return 0;
}