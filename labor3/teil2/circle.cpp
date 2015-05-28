#include "circle.h"
#include <sstream>

cCircle::cCircle() {
}

cCircle::cCircle(cPoint c, double r) {
	center.setX(c.getX());
	center.setY(c.getY());
	radius = r;
}

string cCircle::print(bool b = true) {
	ostringstream ss;
	
	if (b) {
		ss  << "<" << center.print(false) << ", " << radius << ">" << endl;
	} else {
		ss  << "<" << center.print(false) << ", " << radius << ">";
	}
	
	return ss.str();
}

void cCircle::move(double dx, double dy) {
	center.move(dx, dy);
}
