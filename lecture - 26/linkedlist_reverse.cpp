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
 void printlinklist(listnode* head){

    while(head != nullptr){
        cout << head->val <<  " ";
        head= head->next;

        
    }
    cout << endl;

 }

int main(){

   listnode* head = nullptr;

   insertathead(head , 50);
   insertathead(head , 40);
   insertathead(head , 30);
   insertathead(head , 20);
   insertathead(head , 10);
   

   printlinklist(head);

   head = reverselinklist(head);

   printlinklist(head);
   return 0;
}




