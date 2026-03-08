#include <iostream>
#include "list.h"

void addNodeAfter(Node* n, int newData) {
    if (n == nullptr)
        return;

    Node* p1 = new Node{newData, n->next, n};

    if (n->next != nullptr) {
        n->next->prev = p1;
    }
    n->next = p1;
}

void printList(Node* head) {
    Node* tail = nullptr;


    for (Node* curr = head; curr != nullptr; curr = curr->next) {
        std::cout << curr->data << " ";
        tail = curr;
    }

    std::cout << std::endl;


    for (Node* curr = tail; curr != nullptr; curr = curr->prev) {
        std::cout << curr->data << " ";
    }
    std::cout << std::endl;
}
Node* deleteNode(Node *p) {
    if (p == nullptr)
        return nullptr;

    Node *p1 = p->next;

    if (p->next) p->next->prev = p->prev;
    if (p->prev) p->prev->next = p->next;

    delete p;
    return p1;
}

Node* deleteDuplicates(Node *head) {
    Node* tmp = nullptr;
    if (!head) {
        return nullptr;
    }
    while (head) {
        if (head->next && head -> data == head -> next -> data) {
            deleteNode(head->next);
            head = deleteNode(head);
        }
        else {
            if (tmp == nullptr) {
                tmp = head;
            }
            head = head -> next;
        }
    }
    return tmp;
}

void destructor(Node *head) {
    Node* tmp = nullptr;
    if (!head) {
        return;
    }
    while (head) {
        head = deleteNode(head);
    }
}
