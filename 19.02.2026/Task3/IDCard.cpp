#include<iostream>
#include"IDCard.h"
using namespace std;

ID_card::ID_card(string name) {
    this->name = name;
    id = rand();
    cout << "id_card created " << this << endl;
}
ID_card::~ID_card() {
    cout << "id_card deleted " << this << endl;

}

human::human(string name) {
    this->name = name;
}
void human::new_id() {
    delete card;
    this->card = new ID_card(name);
}
void human::rename(string name) {
    delete card;
    card = nullptr;
    this->name = name;
}
human::~human() {
    delete card;
}

string ID_card::to_string() {
    return "id " + std::to_string(id) + " Owner is:" + name;
}

string human::to_string() {
    cout << "to_string: " << name << " " << card << endl;
    if (card == nullptr) {
        return "human " + name + "have no id";
    }
    else {
        return "human" + name + "my id is:" + card->to_string();
    }
}