#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v = {1, 2, 3, 4, 2};
    int slow = v[0];
    int fast = v[0];
    while(true){
        slow = v[slow];
        fast = v[fast];
        if(slow == fast){
            break;
        }
    }
    slow = v[0];
    while(slow != fast){
        slow= v[slow];
        fast = v[v[fast]];
    }
    cout << slow;
return 0;
}