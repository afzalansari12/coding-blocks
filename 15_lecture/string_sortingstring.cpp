#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

    bool myCmp(char a, char b){
        if ( a > b ){
            return true;
        }

        return false;
    }
     
     int main(){

        string s = "xabcyzd";
        sort (s.begin(), s.end());
        cout << s << endl;


        string t = "xaybzc";

        sort(t.begin(), t.end(), myCmp);
          cout << t << endl;
   
 return 0;

    
}
