#include<iostream>
using namespace std;

bool palindrome(listnode* head);
listnode* findmidpoint(listnode* node){
listnode* slow = head;
listnode* fast = head->next;

while(fast != null){
    slow = slow->next;
    fast = fast->next->next;
}

return slow;
}

int main(){

    listnode* head = null;

    insertathead(head, 50);
    insertathead(head, 40);
    insertathead(head, 30);
    insertathead(head, 20);
    insertathead(head, 10);

    printlinkedlist(head);

    ispalindrome(head) ? cout << " true " << endl : cout << "false" << endl;
    return 0;
}