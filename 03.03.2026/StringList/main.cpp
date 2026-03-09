#include "StringList.h"
#include <iostream>
#include <string>

using namespace std;

string testPushBackRValue()
{
    return "rvalue_back";
}

string testPushFrontRValue()
{
    return "rvalue_front";
}

int main()
{
        StringList s;

        string lvalue_str1 = "lvalue_back";
        s.pushBack(lvalue_str1);

        s.pushBack(testPushBackRValue());

        string lvalue_str2 = "lvalue_front";
        s.pushFront(lvalue_str2);

        s.pushFront(testPushFrontRValue());

        s.printList();

        s.popBack();
        s.printList();

        s.popFront();
        s.printList();

        cout << s.size() << endl;

        s.clear();
        cout << s.size() << endl;
        s.printList();

}