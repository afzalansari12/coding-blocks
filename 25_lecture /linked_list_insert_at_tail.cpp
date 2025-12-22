#include<iostream>
using namespace std;
class listnode{
    public :
    int val;
    listnode* next;

    listnode(int val){
        this->val = val;
        this->next= NULL;

    }

};
void insertAtHead(listnode*& head , int val){
    listnode* n = new listnode(val);
    n->next = head;
    head = n;

}
void printLinkedList(listnode* head){
    while(head!= NULL){
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}
listnode* gettail(listnode* temp){
    while(temp->next != NULL){
        temp = temp->next;

    }
    return temp;
}

void insertAtTail(listnode*& head, int val){
    if(head == NULL ){
        insertAtHead(head, val);
        return;
        
    }

    listnode* n = new listnode(val);
    listnode* tail = gettail(head);
    tail->next = n;
}
int main(){
 
 listnode* head = NULL;
 insertAtHead(head,50);
 insertAtHead(head,40);
 insertAtHead(head,30);
 insertAtHead(head,20);
 insertAtHead(head,10);
 
 printLinkedList(head);

 insertAtTail(head, 60);
 
 printLinkedList(head);


    return 0;
}