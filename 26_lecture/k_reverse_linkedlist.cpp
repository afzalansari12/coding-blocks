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

  listnode* reverse_kthlinklist(listnode* head , int k){

        if(head == nullptr){
          return head;
        }

          listnode* prev = nullptr;
          listnode* cur = head;

          int i = 1;


          while( i <= k && cur != nullptr){
            listnode* temp = cur->next;
            cur->next = prev;
            prev = cur;
            cur = temp;
            i++;
          }

          
        listnode* headfromfreind = reverse_kthlinklist(cur , k); 

          head->next = headfromfreind;
       
          return prev;

  }

  void printlinkedlist(listnode* head){
       while(head!= nullptr){
        cout << head->val << " ";
        head= head->next;
       }
       cout << endl;
  }



int main(){

    listnode* head = nullptr;

   insertathead(head, 50);
   insertathead(head, 40);
   insertathead(head, 30);
   insertathead(head, 20);
   insertathead(head, 10);
    
printlinkedlist(head);
     int k = 2;
head = reverse_kthlinklist(head , k);

  printlinkedlist(head);

return 0;
}