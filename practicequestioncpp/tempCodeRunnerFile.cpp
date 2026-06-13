#include<iostream>
using namespace std;
int main(){

    int n;
    cin >> n;

    int num;

      for(int i = 1; i <= n; i++){
             num = (i%2 == 0)?0:1;
        for(int j =1; j<= i;j++){
           cout << num;
             num = 1 - num;
        }
        cout << endl;
      }
    
return 0;
}

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int num = 1;
    for(int j = 1; j <= n ; j++){

    for(int i = 1; i <= n - j;i++){
            cout <<" ";
    } 
    
    for(int k = 1; k <=j ;k++){
         cout << num ;
         num++;

    }
  
    cout << endl;
    }
return 0;
}