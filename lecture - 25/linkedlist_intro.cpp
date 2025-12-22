#include<iostream>
using namespace std;
 
 class listnode {
    public :
    int val;
    listnode* next;
    listnode(int val){
        this->val = val;
        this->next = NULL;
    }
 };


int main() {


   listnode* n = new listnode (10);

   cout << n->val << endl;

    if(n->next == NULL){
        
        cout << "NULL" << endl; 
    }

    return 0;
}