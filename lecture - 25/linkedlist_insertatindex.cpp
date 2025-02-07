

// #include <iostream>
// using namespace std;

// // Define a node structure for a singly linked list
// struct Node {
//     int data;
//     Node* next;

//     Node(int value) : data(value), next(nullptr) {}
// };

// // Function to calculate the length of the linked list
// int getLength(Node* head) {
//     int length = 0;
//     Node* current = head;
//     while (current != nullptr) {
//         length++;
//         current = current->next;
//     }
//     return length;
// }

// // Helper function to add a new node at the end of the list
// void append(Node*& head, int value) {
//     if (head == nullptr) {
//         head = new Node(value);
//         return;
//     }
//     Node* current = head;
//     while (current->next != nullptr) {
//         current = current->next;
//     }
//     current->next = new Node(value);
// }

// // Main function to demonstrate finding the length of the linked list
// int main() {
//     Node* head = nullptr;

//     // Add nodes to the linked list
//     append(head, 1);
//     append(head, 2);
//     append(head, 3);

//     // Find and print the length of the linked list
//     cout << "Length of linked list: " << getLength(head) << endl;

//     return 0;
// }
