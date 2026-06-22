#include<iostream>
#include<string>


using namespace std;

void substrings(string d){

    for(int i = 0; i < d.size(); i++){

        for(int j = i; j < d.size(); j++){
        
         cout << d.substr(i,j-i +1) << endl;
            
          for(int k = i; k <= j; k++){
            cout << d[k];
          }
          cout << endl;
        }
        cout << endl;
       
    }


}

int main(){

    string d = "abcde";


    string substring = d.substr(1,4);
    cout << substring << endl;

    cout << d.substr(4) << endl;
    cout << d.substr(1, 100)<< endl;
    substrings(d);

    return 0;

}


