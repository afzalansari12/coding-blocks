#include<iostream>
using namespace std;

int main (){

    int n;
    cin >> n;
     int i = 1;
    char ch;
    

    while(i <= n){

        int j = 1;
        ch = 'A';
        while (j <= n-i +1){
        cout << ch ;
        
         ch++;
        j++;
    
        }
        i++;
    cout << endl;

    
    }
    

    return 0;
}