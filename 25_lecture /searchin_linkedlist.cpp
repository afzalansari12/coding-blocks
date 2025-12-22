#include<iostream>
using namespace std;
class listnode{
    public :

    int val;
    listnode* next;
    listnode(int val){
        this->val = val ;
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
 bool searchIterative(listnode* head , int target){
    while(head!= NULL){
        if(head->val == target){
            return true;
        }
        head = head->next;
    }
    return false;
 }
int main(){

    listnode* head = NULL;

    insertAtHead(head, 50);
    insertAtHead(head, 40);
    insertAtHead(head, 30);
    insertAtHead(head, 20);
    insertAtHead(head, 10);
    
    printlinkedlist(head);

    int target = 300;

    searchIterative(head,target ) ? cout << target << " found" << endl : cout << target << " not found" << endl ; 


    return 0;
}