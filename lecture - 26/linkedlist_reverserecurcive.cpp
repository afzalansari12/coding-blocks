#include<iostream>
using namespace std;







int main(){

    listnode* head = null;

    insertathead(head, 50);
    insertathead(head, 40);
    insertathead(head, 30);
    insertathead(head, 20);
    insertathead(head, 10);

    printlinkedlist(head);

    head = reverserecursive(head);

    head = reverserecursive(head);

    printlinkedlist(head);

    return 0;
}