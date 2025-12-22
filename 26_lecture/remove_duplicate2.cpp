#include<iostream>

using namespace std;

class listnode {
    public :
    int val;

    listnode* next;

	listnode( int val) {

		this->val = val ;
		this->next = NULL;
	}

};
void insertathead(listnode* & head, int val){
         listnode* n = new listnode(val);
         n->next = head;
         head = n;
}
void printlinklist(listnode* head){

    while(head != nullptr){
        cout << head->val <<  " ";
        head= head->next;

        
    }
    cout << endl;

 }

 listnode* removeduplicate(listnode* head){

    if(head == nullptr || head->next == nullptr){
        return head;
    }

    if(head->val != head->next->val){
        listnode* hff = removeduplicate(head->next);
        head->next =hff;
        return head;

    } else{
        while(head->next != nullptr and head->val == head->next->val){
            head = head->next;
        }

        listnode* hff = removeduplicate(head->next);

        return hff;
    }
 }
int main () {

   listnode* head = nullptr;

   insertathead(head , 10);
   insertathead(head , 10);
   insertathead(head , 10);
   insertathead(head , 10);
   insertathead(head , 10);
   

//    printlinklist(head);

   head = removeduplicate(head);

   printlinklist(head);

   return 0;
}
