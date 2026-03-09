#include "StringList.h"
#include <iostream>
#include <string>

using namespace std;

string testPushBackRValue()
{
    return "1";
}

string testPushFrontRValue()
{
    return "2";
}

int main()
{
        StringList s;

        s.pushFront("1");
        s.printList();
        s.pushFront("2");
        s.printList();
        s.pushFront("3");
        s.printList();
        s.pushFront("4");
        s.printList();
        s.pushBack("9");
        s.printList();
        s.pushFront("8");
        s.printList();

}