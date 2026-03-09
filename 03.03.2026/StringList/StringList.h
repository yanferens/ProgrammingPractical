#pragma once
#include <string>

using std::string;

class StringList {
public:
    StringList() {
        unrealHead = new Node{"", nullptr, nullptr};
        unrealHead->next = unrealHead;
        unrealHead->prev = unrealHead;
    }

    StringList(const StringList &) = delete;
    StringList &operator=(const StringList &) = delete;
    StringList(StringList &&) = delete;
    StringList &operator=(StringList &&) = delete;

    ~StringList();

    size_t size() const noexcept { return size_; }
    bool empty() const noexcept { return size_ == 0; }

    void pushBack(const string &elem);
    void pushBack(string &&elem);
    void pushFront(const string &elem);
    void pushFront(string &&elem);

    void popFront();
    void popBack();
    void clear() noexcept;
    void printList() const;

private:
    struct Node {
        string data;
        Node* next = nullptr;
        Node* prev = nullptr;
    };

    Node* unrealHead = nullptr;
    size_t size_ = 0;
};