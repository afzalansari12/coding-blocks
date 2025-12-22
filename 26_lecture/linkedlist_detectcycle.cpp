#include<iostream>
#include<set>

using namespace std;


class listnode{
    public :
    int val ;
    listnode* next;
    listnode(int val){
        this->val = val;
        this->next= nullptr;
    }

};

 bool iscyclepresent(listnode* head){

    listnode* slow = head;
    listnode* fast = head;

    while(fast  != nullptr && fast->next != nullptr){
        
  slow = slow-> next;
  fast = fast->next->next;
  if(slow == fast ){

    return true;

  }
    
 }
return false;
 }

int main(){

     listnode* head = new listnode(10);
     
     head->next =new listnode(20); 
     head ->next->next =new listnode(30); 
     head->next->next->next =new listnode(40); 
     head->next->next->next->next =new listnode(50); 
     head->next->next->next->next->next =new listnode(60);
     head->next->next->next->next->next->next = head->next->next;

     iscyclepresent(head) ? cout << " cycle found" << endl : cout << "cycle not found" << endl; 
       
    return 0;
}