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
     head = n;


}

void printlinkedlist(listnode* head) {

	while (head != nullptr) {
		cout << head->val << " ";
		head = head->next;
	}

	cout << endl;
}

listnode* reverserecursive(listnode* head) {

	// base case

	if (head == nullptr) {
		// LinkedList is empty
		return head;
	}

	// LinkedList is non-empty

	if (head->next == nullptr) {
		// LinkedList has one node
		return head;
	}

	// if (head == NULL || head->next == NULL) {
	// 	return head;
	// }

	// recursive case

	// LinkedList has >= 2 nodes

	// 1. ask your friend to reverse the sublist that starts from the node which comes after the head node

	listnode* headFromMyFriend = reverserecursive(head->next);

	head->next->next = head;
	head->next = nullptr;

	return headFromMyFriend;

}




int main(){

    listnode* head = nullptr;

    insertathead(head, 50);
    insertathead(head, 40);
    insertathead(head, 30);
    insertathead(head, 20);
    insertathead(head, 10);

    printlinkedlist(head);

    // head = reverserecursive(head);

    head = reverserecursive(head);

    printlinkedlist(head);

    return 0;
}