#include "intmenge.h"
#include <iostream>
using namespace std;

// Public:
IntMenge::IntMenge() {}

void IntMenge::hinzufuegen(int el) {
	// If element is unique
    if(!(istMitglied(el))) {
    	// Add element at the very end.
        vec.push_back(el);
    }
}

void IntMenge::entfernen(int el) {
	if(istMitglied(el)) {
		// Delete the element at position 0 + XY
		vec.erase(vec.begin() + finden(el));
	}
}

bool IntMenge::istMitglied(int el) const{
	// Check if element is in the vector
    for(int i = 0; i < vec.size(); i++) {
        if (vec[i] == el) return true;
    }
    return false;
}

int IntMenge::size() const {
	return vec.size();
}

void IntMenge::anzeigen() const{
	// Print out all elements.
	for(int i = 0; i < vec.size(); i++) {
		cout << "[" << i + 1 << "] -> " << vec[i] << endl;
	}
}

void IntMenge::loeschen() {
	// Clear the whole vector.
	vec.clear();
}

int IntMenge::getMax() const{
	int max;
	for(int i = 0; i < vec.size(); i++) {
		// First element is always the max.
		if(i == 1) max = vec[i];
		// Max was found
		if(vec[i] > max) max = vec[i];
	}
	return max;
}

int IntMenge::getMin() const{
	int min;
	for(int i = 0; i < vec.size(); i++) {
		// First element is always the min.
		if(i == 1) min = vec[i];
		// Min was found
		if(vec[i] < min) min = vec[i];
	}
	return min;
}

// Private:
int IntMenge::finden(int el) {
	// Check if element is in the vector
	if(istMitglied(el)) {
		// If it is, look for it.
		for(int i = 0; i < vec.size(); i++) {
			if (vec[i] == el) return i;
		}
	}
	// Otherwise return -1
	return -1;	
}
