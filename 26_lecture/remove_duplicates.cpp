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

    listnode* prev = head;
    listnode* cur = head->next;

    while(cur->next != nullptr){

        if(cur->val != prev->val){

            prev->next = cur;
            prev = cur;
            // cur = cur->next;
        }
        cur = cur->next;
          
    }

    prev->next = nullptr;
    return head;
 }
int main () {

   listnode* head = nullptr;

   insertathead(head , 40);
   insertathead(head , 40);
   insertathead(head , 30);
   insertathead(head , 10);
   insertathead(head , 10);
   

   printlinklist(head);

   head = removeduplicate(head);

   printlinklist(head);

   return 0;
}




