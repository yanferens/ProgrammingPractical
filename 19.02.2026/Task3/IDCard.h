#pragma once
#include<string>
using namespace std;


class ID_card {
    string name;
    int id;

public:
    ID_card(string name);
    string to_string();
    ~ID_card();


};

class human {
    string name;
    ID_card* card = nullptr;

public:
    human(string name);
    void new_id();
    void rename(string name);
    ~human();
    string to_string();

};

