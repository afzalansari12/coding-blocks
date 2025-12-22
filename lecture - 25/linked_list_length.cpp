#include<iostream>

using namespace std;
class listnode {
    public :
    int val;
    listnode* next;
    listnode(int val ){
        this->val = val;
        this->next = NULL;

    }
};

void insertAtHead( listnode*& head ,int val){

  listnode* n = new listnode(val);
   n->next = head;
   head = n;

}

void printlinkedlist(listnode* head){
while(head != NULL){
    cout << head->val << " ";
    head = head-> next;
}
 cout << endl;
}
 listnode* getnode(listnode* temp, int j){
    while(j-- and temp != NULL){
        temp = temp->next;
    }
    return temp;
 }

   void insertAtIndex(listnode*& head,  int i, int val){
    if(i == 0){
        insertAtHead(head , val);
        return;
    }

    listnode* n = new listnode(val);
    listnode* prev = getnode(head, i- 1);
    if(prev == NULL){
        return;
    }
    n->next = prev->next;
    prev->next = n;

   }
   int lengthlinkedlistiterative(listnode* head){
        
        int cnt = 0;
        while(head != NULL){
            cnt++;
            head = head->next;

        }

        return cnt ;

   }

   int lengthlinkedlistrecursive(listnode* head){
    if(head == NULL){
        return 0;
    }
    int x = lengthlinkedlistrecursive(head->next);
    return x+ 1;
   }
   


int main(){

    listnode* head = NULL;

    insertAtHead(head, 50);
    insertAtHead(head, 40);
    insertAtHead(head, 30);
    insertAtHead(head, 20);
    insertAtHead(head, 10);
    
    // printlinkedlist(head);

    // insertAtIndex(head, 4, 35);

    printlinkedlist(head);

    cout << lengthlinkedlistiterative(head) << " " << endl;
      
     cout << lengthlinkedlistrecursive(head) << " " << endl;
    return 0 ;
}
