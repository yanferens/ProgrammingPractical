#pragma once

struct Node {
    int data;
    Node* next = nullptr;
    Node* prev = nullptr;
};


void addNodeAfter(Node* node, int data);
void printList(Node* head);
Node* deleteNode(Node* p);
void add6After7(Node* head);
Node* deleteDuplicates(Node* head);
void destructor(Node* head);