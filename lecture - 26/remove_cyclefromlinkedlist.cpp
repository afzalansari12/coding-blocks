#include<iostream>
using namespace std;

class listnode{
    public :
    int val;
    listnode* next;
    listnode(int val){
        this-> val = val;
        this->next = nullptr;

    }
};
 void printlinkedlist(listnode* head){
     while(head != nullptr){
        cout << head->val << " ";
        head= head->next;
     }
     cout << endl;
}
void removecycle(listnode* head){
    listnode* slow = head;
    listnode* fast = head;

    while(true){
        slow= slow->next;
        fast= fast->next->next;
        if(slow == fast){
            break;

        }
        
    }
    slow = head;


    while(slow->next != fast->next){
          slow = slow->next;
          fast = fast->next;
    }
    fast->next = nullptr;
}


int main(){
    listnode* head = new listnode(10);
     
     head->next =new listnode(20); 
     head ->next->next =new listnode(30); 
     head->next->next->next =new listnode(40); 
     head->next->next->next->next =new listnode(50); 
     head->next->next->next->next->next =new listnode(60);
     head->next->next->next->next->next->next = head->next->next;
     removecycle(head);
     printlinkedlist(head);
      return 0;
}