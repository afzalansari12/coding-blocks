#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
 bool myLencmp(string a, string b){
    if(a.size() < b.size()){
        return true;
    }
    return false;

    
 }
int main(){
    string arr[] = { " abcd" ,"z", " ef" , " xyz"};
    int n =4;

    sort(arr, arr+n , myLencmp);

    for(int i = 0; i < n; i++){

        cout << arr[i] << " ";


    }

    cout << endl;
    return 0;
}