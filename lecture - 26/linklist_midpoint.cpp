#include<iostream>
using namespace std;

listnode* findmidpoint(listnode* node);
listnode* slow = head;
listnode* fast = head->next;

while(fast != null){
    slow = slow->next;
    fast = fast->next->next;
}

int main(){
    listnode* head = null;

    insertathead(head, 50);
    insertathead(head, 40);
    insertathead(head, 30);
    insertathead(head, 20);
    insertathead(head, 10);

    printlinkelist(head);

    listnode* midpoint = findmidpoint(head);
    cout << midpoint ->val << endl;


    return 0;
}