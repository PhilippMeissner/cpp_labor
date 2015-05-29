#include <iostream>
#include "point.cpp"
#include "circle.cpp"
using namespace std;

int main () {
	
	cPoint p(4, 5);						// Works all fine
	cout << p.getX() << endl;			// "p.x" -> x is private
	cout << p.print();					// "p.print" misses the ();
	p.move(3,4);						// "move(3,4)" has no object to be called on
	cout << p.print();					// Works all fine
	
	cPoint * ptr = new cPoint(7, 9);	// Works all fine
	double fpt = ptr->getX();			// can not convert double to double*
							
	cout << ptr->getX() << endl;		// ptr is a pointer and x is private
	cout << ptr->print();				// ptr is a pointer, thus we need to differenciate
	
	ptr->move(3, 11);					// void value not ignored as it ought to be
	cout << ptr->print();				// Works all fine
	
	return 0;
}
