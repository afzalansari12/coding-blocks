// #include<iostream>
// using namespace std;

// int f(int a,int b) {
//   if (b == 0){

//     return 0;
//   }
//  int A = f(a, b -1);
    // return   a + A;

// }
// int main(){
//     int a ;
//     cin >> a;

//     int b ;
//     cin >> b;
//     cout << f(a,b) << endl;
// return 0;
// }

// powers optimized 

    
// #include<iostream>
// using namespace std;
// int f(int a,int b){
//   if(b == 0){
//     return 1;
//   }
//   int A = f(a,b/2);
//   if(b%2==0){
//     return A*A;
//   }
//   return a*A*A;
// }
// int main(){
//   int a;
//   int b;
//   cin >> a >> b;
//  cout <<  f(a,b);
// return 0;
// }