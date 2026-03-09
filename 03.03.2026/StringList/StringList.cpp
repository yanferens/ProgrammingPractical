#include "StringList.h"
#include <string>
#include <iostream>

void StringList::pushBack(const string &elem) {
        auto node = new Node{elem, unrealHead, unrealHead->prev};
        unrealHead->prev->next = node;
        unrealHead->prev = node;
        ++size_;
}

void StringList::pushBack(string &&elem) {
    auto node = new Node{std::move(elem), unrealHead, unrealHead->prev};
    unrealHead->prev->next = node;
    unrealHead->prev = node;
    ++size_;
}

void StringList::pushFront(const string &elem) {
    auto node = new Node{elem, unrealHead->next, unrealHead};
    unrealHead->next->prev = node;
    unrealHead->next = node;
    ++size_;
}

void StringList::pushFront(string &&elem) {
    auto node = new Node{std::move(elem), unrealHead->next, unrealHead};
    unrealHead->next->prev = node;
    unrealHead->next = node;
    ++size_;
}

void StringList::popFront() {
    if (empty()) {
        std::cout << "List is empty";
        return;
    }
    else {
        auto node = unrealHead->next;
        unrealHead->next = node->next;
        node->next->prev = unrealHead;
        delete node;
        --size_;
    }

}
void StringList::popBack() {
    if (empty()) {
        std::cout << "List is empty";
        return;
    }
    else {
        auto node = unrealHead->prev;
        unrealHead->prev = node->prev;
        node->prev->next = unrealHead;
        delete node;
        --size_;
    }
}

void StringList::printList() const {
    if (empty()) {
        std::cout << "List is empty";
        return;
    }
    auto iterator = unrealHead->next;
    while (iterator != unrealHead) {
        std::cout << iterator->data << " ";
        iterator = iterator->next;
    }
    std::cout<<"\n";
}

void StringList::clear() noexcept{
    auto iterator = unrealHead->next;
    while (iterator != unrealHead) {
        auto temp = iterator;
        iterator = iterator->next;
        delete temp;
    }
    unrealHead->next = unrealHead;
    unrealHead->prev = unrealHead;
    size_ = 0;
}

StringList::~StringList(){
    clear();
    delete unrealHead;
}
