#include<iostream>
#include<vector>
using namespace std;
void linearsearch(vector<int> & arr){
    int n = arr.size();

    int target = 8;
    bool found ;

    for(int i = 0; i < n ; i++){
        if(arr[i] == target ){
            cout << "target is found  at " << i << " index";
            break;
    }

    
}
  if(!found){
        cout << " target is not found" << endl;
    }

}
int main(){
    vector<int>  arr = { 3 , 4 ,5, 6 ,9 ,7};
    linearsearch(arr);
return 0;
}