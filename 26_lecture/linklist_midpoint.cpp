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

listnode* findmidpoint(listnode* head) {
    listnode* slow = head;
    listnode* fast = head->next;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
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

int main() {
    listnode* head = nullptr;
    
    insertathead(head, 60);
    insertathead(head, 50);
    insertathead(head, 40);
    insertathead(head, 30);
    insertathead(head, 20);
    insertathead(head, 10);

    printlinkedlist(head);

    listnode* midpoint = findmidpoint(head);
    cout << "Midpoint value: " << midpoint->val << endl;

    return 0;
}
