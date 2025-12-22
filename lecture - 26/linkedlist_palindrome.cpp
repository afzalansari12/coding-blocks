#include<iostream>
using namespace std;
class listnode {
public:
    int val;
    listnode* next;
    listnode(int val) {
        this->val = val;
        this->next = nullptr;
    }
};


listnode* reverselinklist(listnode* head ){

    listnode* prev = nullptr;
    listnode* cur = head;

    while(cur != nullptr){
       listnode* temp = cur->next;
       cur->next = prev;
       
       prev = cur;
       cur = temp;


    }
    return prev;

 }

bool palindrome(listnode* head);

listnode* findmidpoint(listnode* head){
    if(head == nullptr){
        return head;
    }
    
listnode* slow = head;
listnode* fast = head->next;

while(fast != nullptr && fast->next != nullptr){
    slow = slow->next;
    fast = fast->next->next;

}

return slow;
}

bool ispalindrome(listnode* head){
  listnode* midpoint  = findmidpoint(head);
  listnode* head2 = midpoint->next;
  midpoint->next = nullptr;

  head2 = reverselinklist(head2);
  while(head2!= NULL){
    if(head->val != head2->val){
        return false;
    }
    head = head->next;
    head2 = head2->next;
  }

       return true;
}

void printlinkedlist(listnode* head) {
    while(head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

void insertathead(listnode* &head, int val) {
    listnode* n = new listnode(val);
    n->next = head;
    head = n;
}
int main(){

    listnode* head = nullptr;
    insertathead(head, 10);
    insertathead(head, 10);
    insertathead(head, 30);
    insertathead(head, 30);
    insertathead(head, 10);
    insertathead(head, 10);

    printlinkedlist(head);

    ispalindrome(head) ? cout << " true " << endl : cout << "false" << endl;
    return 0;
}