#include<iostream>
using namespace std;

class listnode{
    public :
    int val;
      listnode* next;
    listnode(int val){
       this->val = val;
       this->next = nullptr;
    }
};

void insertathead(listnode*& head , int val){
     
     
   listnode* n = new listnode(val);
    n->next = head;
    head= n;
       
}
void printlinkedlist(listnode* head){
       while(head!= nullptr){
        cout << head->val << " ";
        head= head->next;
       }
       cout << endl;
  }


  listnode* rotatelinkedlist(listnode* head, int k){
    int n = 1;
    listnode* tail = head;
    while(tail->next !=  nullptr){
        tail = tail->next;
        n++;
    }
    tail->next = head;
    listnode* newtail = head;
    for(int i = 0; i < n - (k%n)- 1; i++){
        newtail = newtail->next;

    }
    listnode* newhead = newtail->next;

    newtail->next = nullptr;

    return newhead;
  }



int main(){

    listnode* head = nullptr;

   insertathead(head, 50);
   insertathead(head, 40);
   insertathead(head, 30);
   insertathead(head, 20);
   insertathead(head, 10);
    
printlinkedlist(head);
     int k = 5;
head = rotatelinkedlist(head , k);

  printlinkedlist(head);

return 0;
}