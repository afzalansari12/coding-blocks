#include<iostream>

using namespace std;

int main(){

    char ch = 'A';

    int* ptr2 = (int*)&ch;

    cout << ptr2 << endl;

    
        int x = 120;
        char* ptr = (char*)&x;
        cout << (int)*ptr << endl;

    return 0;


}

   