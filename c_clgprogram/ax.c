// #include<stdio.h>
// #include<math.h>
// int main (){

//     printf("2024B0101691");
//     int n , r;

// float  result = 1.0;
//     printf(" enter  a base exponent  r : ");
//     scanf("%d", &r);
//     while( r != 0){
//         result *= n;
//         --r;
//     }
//     printf("answer = %f", result);

//     printf("x");
//     putchar('\n');
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

// Function to count positive and negative nodes
void countPosNeg(struct Node* head) {
    int pos = 0, neg = 0, zero = 0;

    struct Node* temp = head;

    while (temp != NULL) {
        if (temp->data > 0)
            pos++;
        else if (temp->data < 0)
            neg++;
        else
            zero++;

        temp = temp->next;
    }

    printf("Positive nodes: %d\n", pos);
    printf("Negative nodes: %d\n", neg);
    printf("Zero nodes    : %d\n", zero);
}

// Main function
int main() {
    struct Node* head = NULL;
    struct Node* temp = NULL;

    int values[] = {10, -5, 0, 20, -15};
    int n = sizeof(values) / sizeof(values[0]);

    for (int i = 0; i < n; i++) {
        if (head == NULL) {
            head = createNode(values[i]);
            temp = head;
        } else {
            temp->next = createNode(values[i]);
            temp = temp->next;
        }
    }

    countPosNeg(head);

    return 0;
}
