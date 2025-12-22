#include<iostream>
using namespace std;


int minidx = i;
        int leftidx = 2*i + 1;
        if(v[leftidx] < v[minidx]){

            minidx = leftidx;
        }

        
        int rightidx = 2*i + 2;
        if(v[rightidx] < v[minidx]){
            minidx = rightidx;
        }
        if(minidx != i){
            swap(v[i], v[minidx]);
            heapify(minidx);

        }



int main(){
    vector<int> v = { 1, 2, 3, 4, 5, 6, 7,8 ,9};
    int n = v.size();
    for(int i = n - 1; i >= 0; i--){

        heapify(v,n,i);

    }
    for(int i 0; i < v.size; i++){
        cout << 
    }
    
    cout << endl;
    return 0;
}
