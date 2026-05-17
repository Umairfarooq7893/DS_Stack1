#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* RS(Node* head) {
    if(head == NULL) return NULL;

    // Step 1: Count nodes
    int n = 0;
    Node* temp = head;
    while(temp != NULL) {
        n++;
        temp = temp->next;
    }

    // Step 2: Create manual stack
    Node* stack[n];
    int top = -1;

    // Step 3: Push all nodes into stack
    temp = head;
    while(temp != NULL) {
        stack[++top] = temp;
        temp = temp->next;
    }

    // Step 4: Pop and rebuild list
    head = stack[top--];   // new head
    temp = head;

    while(top >= 0) {
        temp->next = stack[top--];
        temp = temp->next;
    }

    temp->next = NULL; // last node

    return head;
}