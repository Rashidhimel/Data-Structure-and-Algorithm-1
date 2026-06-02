#include <stdio.h>
#include <stdlib.h>

// Definition of a node
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to print the middle node
void printMiddle(struct Node* head) {
    struct Node *slow = head, *fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;           // Move slow by one
        fast = fast->next->next;     // Move fast by two
    }

    if (slow != NULL)
        printf("%d\n", slow->data);
}

// Main function
int main() {
    // Creating linked list: 1 -> 4 -> 6 -> 7 -> 9 -> 11
    struct Node* head = createNode(1);
    head->next = createNode(4);
    head->next->next = createNode(6);
    head->next->next->next = createNode(7);
    head->next->next->next->next = createNode(9);
    head->next->next->next->next->next = createNode(11);

    // Print the middle node
    printMiddle(head);

    return 0;
}
