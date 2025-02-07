#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int i = 1;
     
     while(i <= n){
        int j = 1;
        while(j <= n- i){

            cout << " ";
            j++;
        }

        int num = 1;
          j= 1;

        while ( j <= i){
            cout << num ;
            num++;

        j++;
        }
       
        num = 2*i -2;
         j= 1;
        while (j <= i -1){
            cout  << num;
            num--;
            j++;
        }
        cout << endl;
        i++;

        

     }


    return 0;
}