// #include<iostream>
// using namespace std;
// int main(){
//     int n ;
//     cin >> n;
 
    //   for(int i = n; i >= 1 ; i--){

    //   for(int j = 0; j < i;j++){
    //     cout<<"*";
    //   }
    //   for(int j = 0; j<2*(n-i); j++){
    //     cout<<" ";
    //   }
       
    //    for(int j = 0; j < i;j++){
    //     cout<<"*";
    //   }
    //   cout << endl;
     
    //   }
     
// return 0;
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int n ;
//     cin >> n;
       
        
//       for(int i = n; i >= 1 ; i--){

//       for(int j = 0; j < i;j++){
//         cout<<"*";
//       }
//       for(int j = 0; j<2*(n-i); j++){
//         cout<<" ";
//       }
       
//        for(int j = 0; j < i;j++){
//         cout<<"*";
//       }
//       cout << endl;
     
//       }

//       for(int i = 1; i <= n ; i++){

//       for(int j = 0; j < i;j++){
//         cout<<"*";
//       }
//       for(int j = 0; j<2*(n-i); j++){
//         cout<<" ";
//       }
       
//        for(int j = 0; j < i;j++){
//         cout<<"*";
//       }
//       cout << endl;
     
//       }
     
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     for(int i = 0; i < n; i++ ){

//         for(int j = 0; j < i; j++){
//             cout<<" ";
//         }

//         for(int j = 0; j < n ; j++){
//             cout<<"*";
//         } 
        
//         cout<<'\n';
//     }
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     for(int i = n; i > 0; i-- ){

//         for(int j = 0; j < i; j++){
//             cout<<" ";
//         }

//         for(int j = 0; j < n ; j++){
//             cout<<"*";
//         } 
        
//         cout<<'\n';
//     }
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
  
//        for(int i = 0; i < n;i++){
//             int num = 1;
//         for(int j = 0;j < i; j++){
//            cout << num ;
//            num++;
//         }
//         cout << endl;
//        }
    
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//         int num = 1;
//        for(int i = 0; i < n;i++){
           
//         for(int j = 0;j < i; j++){
//            cout << num ;
//            num++;
//         }
//         cout << endl;
//        }
    
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){

//     int n;
//     cin >> n;

//     int num;

//       for(int i = 1; i <= n; i++){
//              num = (i%2 == 0)?0:1;
//         for(int j =1; j<= i;j++){
//            cout << num;
//              num = 1 - num;
//         }
//         cout << endl;
//       }
    
// return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     int num = 1;
//     for(int j = 1; j <= n ; j++){

//     for(int i = 1; i <= n - j;i++){
//             cout <<" ";
//     } 
    
//     for(int k = 1; k <=j ;k++){
//          cout << num ;
//          num++;

//     }
  
//     cout << endl;
//     }
// return 0;
// }

#include<iostream>
using namespace std;
int main(){
  int n;
  cin >> n;
  int num = 1 ;

  for(int i = 1; i <= n ; i++){

    for(int j = 1; j <= n - i; j++){
      cout << " ";
    }
    num = i;
    for(int j = 1; j <= i; j++){
       cout << num;
       num++;
    }

    num = 2*(i - 1);
    for( int j = 1; j <= i-1; j++ ){
        cout<< num;
        num = num -1;
       }
    cout << endl;
  }

return 0;
}