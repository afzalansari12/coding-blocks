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
 int computelengthoflinkedlist(listnode* head){
    int cnt = 0;
    while(head != nullptr){
        head = head->next;
        cnt++;
    }
    return cnt ;

 }


 listnode* bubblesort(listnode* head){
    int n = computelengthoflinkedlist(head);
    int i = 1;
    while(i < n){
        int j = 0;
        listnode* prev = nullptr;
        listnode* cur = head;
        while(j < n - i){
            listnode* temp = cur-> next;
            if(cur->val > temp-> val){
                cur->next = temp->next;
                temp->next = cur;
                if(prev == nullptr){
                     head = temp;
                }else{
                    prev->next = temp;

                }
                prev = temp;
            } else {
                prev = cur;
                cur = cur ->next;
            }
            j++;

        }
        i++;
    }
    return head;
 }
 int main () {

   listnode* head = nullptr;

   insertathead(head , 40);
   insertathead(head , 20);
   insertathead(head , 90);
   insertathead(head , 10);
   insertathead(head , 50);
   

   printlinklist(head);

   head = bubblesort(head);

   printlinklist(head);

   return 0;
}