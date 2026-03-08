#include<iostream>
#include"IDCard.h"

using namespace std;

int main() {
    human A("Sergiy");
    cout << A.to_string()<<endl;
    A.new_id();
    cout << A.to_string() << endl;
    A.new_id();
    cout << A.to_string() << endl;
    A.rename("Dmitro");
    cout << A.to_string() << endl;
}


// Prob #2:
// Person with ID card
// ID card:
//  - name
//  - id
// Person:
//  - name
//  - ptr to ID card
//  - can issue new ID card to self
//  - can be renamed
//  - destroys ID card on delete
//  - print/to_string
