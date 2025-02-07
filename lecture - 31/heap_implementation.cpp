#include<iostream>
#include<vector>
using namespace std;

class minheap{

    vector<int> v;
    void heapify(int i ){

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


    }
    public:
    void push(int val){
        v.push_back(val);
        int childidx = v.size() - 1;
        int parentidx = childidx%2 == 0? childidx / 2-1: childidx/2;
        while( childidx!= 0 and v[childidx] < v[parentidx]){
        childidx = parentidx;
        parentidx = childidx%2 == 0? childidx / 2-1: childidx/2;

    }

    
    }
    void pop(){
        swap(v[0], v[v.size() - 1]);
        v.pop_back();
        heapify(0);

    }
    int top(){
        return v[0];
        
    } 
    int size(){
        return v.size();
    }

    bool empty(){
        return v.empty();

    }
};
int main (){
    minheap m;
    m.push(9);
    m.push(8);
    m.push(7);
    m.push(6);
    m.push(5);
    m.push(4);
    m.push(3);
    m.push(2);
    m.push(1);


   cout << m.size() << endl;
   while (!m.empty()){
    cout << m.top()<< " ";

   }

   cout << endl;

   cout << m.size() << endl;

    return 0;
}