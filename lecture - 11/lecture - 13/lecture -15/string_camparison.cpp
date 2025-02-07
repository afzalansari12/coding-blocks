#include<iostream>
using namespace std;

int main(){

 string s = "abc";
 string  t = " def";

 if(s <t){
    cout << s << " < " << t << endl;

 } else{

    cout << s << " >" <<  t << endl;

 }
  cout << s.compare(t) << endl;
  cout << 'x' - 'a' << endl;

  int ans = s.compare(t);

  if (ans > 0) {
   cout << s << " < " << t << endl;  
  } else {
   cout << s << "is equal to " << t << endl;
  }
 return 0;
}