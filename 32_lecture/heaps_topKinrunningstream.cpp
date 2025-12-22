#include<iostream>
#include<queue>
#define pqmin priority_queue<int, vector<int>,greater<int>

int main(){
    int k;
    cin >> k;
  pqmin minheap;
  int val;
  for(int i = 0; i < k; i++){

    cin >> val;
    minheap.push(val);
  }

  while(true){
    cin >> val;
    if(val == -1){

        printminheap(minheap);
    }else{
        if(val > minheap.top)
    }
  }
    return 0;
}
