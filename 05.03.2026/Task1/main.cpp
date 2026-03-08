#include <iostream>
#include "list.h"

int main() {
    Node* head = new Node{1, nullptr, nullptr};

    addNodeAfter(head, 2);
    addNodeAfter(head->next, 2);
    addNodeAfter(head->next->next, 3);
    addNodeAfter(head->next->next->next, 3);
    addNodeAfter(head->next->next->next->next, 4);

    std::cout << "Initial list:" << std::endl;
    printList(head);

    std::cout << "\nAfter deleteNode(head->next):" << std::endl;
    deleteNode(head->next);
    printList(head);

    std::cout << "\nAfter deleteDuplicates(head):" << std::endl;
    head = deleteDuplicates(head);
    printList(head);

    destructor(head);
    head = nullptr;
}