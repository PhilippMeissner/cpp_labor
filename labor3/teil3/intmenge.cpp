#include "intmenge.h"
using namespace std;

// Public:
IntMenge::IntMenge() {}

void IntMenge::hinzufuegen(int el) {
    if(!(istMitglied(el))) {
        cout << "Kann rein." << endl;
    } else {
        cout << "Element exists already." << endl;
    }
}
void IntMenge::entfernen(int el) {}
bool IntMenge::istMitglied(int el) const{
    for(int i = 0; i < vec.size; i++) {
        if (vec[i] == el) return true;
    }
    return false;
}
int IntMenge::size() const{}
void IntMenge::anzeigen() const{}
void IntMenge::loeschen() {}
int IntMenge::getMax() const{}
int IntMenge::getMin() const{}


// Private:
int IntMenge::finden(int el) {}
