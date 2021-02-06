#include <iostream>

class Node {
public:
    int data;
    Node* next;
};

int main() {

    // Declaring values to be null and making them new Nodes

    Node* head = NULL;
    Node* second = NULL;
    Node* tail = NULL;

    head = new Node();
    second = new Node();
    tail = new Node();

    // Assigning the value and linking to the next data

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = tail;

    tail->data = 3;
    tail->next = NULL;

    return 0; 
}