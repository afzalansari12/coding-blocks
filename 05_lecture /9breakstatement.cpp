#include<iostream>

using namespace std;

int main(){

    int count =0;
    int data;

    while( true){

        cin >> data;
        if ( data < 0){
            break;
        } 
        count = count + 1;
    }

    cout << " count = " << count << endl;

    return 0;
}