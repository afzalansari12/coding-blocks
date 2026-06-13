// #include<iostream>
// using namespace std;


// void swap(int& a, int& b){
//     int temp = a;
//     a = b;
//     b = temp;
// }
// int main(){
        
//         int a = 10;
//         int b = 20;
//            swap(a,b);
//         cout << a << " " << b << endl;



//     return 0;

// }

// #include<iostream>
// using namespace std;
// int c;
// int & multiply(int a, int b){
//     c = a*b;
//     return c;
// }

// int main(){
// int ref = multiply(2,3);
// cout << c << ref << endl;
// ref++;
// cout << c << ref << endl;

// return 0;
// }

#include<iostream>
using namespace std;
template <typename I>
I maxi(I a, I b){
    return (a>b)? a :b;
}

int main(){
 cout << maxi(2,3);
   
return 0;
}