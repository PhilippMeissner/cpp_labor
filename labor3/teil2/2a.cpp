#include <iostream>
#include "point.cpp"
#include "circle.cpp"
using namespace std;

int main () {
	
	cPoint p(1.3, 1.4);
	cCircle c(p, 0.5);
	
	cout << p.print();
	cout << c.print();
	
	c.move(1.7, 1.6);
	cout << c.print();

	return 0;
}
