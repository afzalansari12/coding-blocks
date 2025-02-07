#include<iostream>
using namespace std;

int main(){
      
      int lcount=0;
      int ucount=0;
      int dcount=0;
      int wcount=0;
      int scount=0;
      

      char ch;
       while (true){
       ch = cin.get();

       if (ch == '$'){

        break;
       }
       if(ch >= 'A'and ch <= 'Z'){

        ucount++;
       } else if(ch >='a'and ch <= 'z'){

        lcount++;

       }else if(ch >= '0'and ch <= '9'){
        dcount++;
       }else if(ch  == ' ' || ch == '\n' || ch == '\t'){
        wcount++;
       }
       else{
        scount++;
       }
       }
       cout << "ucount =" << ucount << endl;
       cout << "lcount=" <<  lcount << endl;
       cout << "dcount=" << dcount << endl;
       cout << "wcount=" << wcount << endl;
       cout << "scount= "<< scount << endl;

    return 0;
}