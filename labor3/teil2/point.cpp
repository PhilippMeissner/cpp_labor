#include "point.h"
#include <sstream>

// Constructor
cPoint::cPoint() {
}

cPoint::cPoint(double dx, double dy) {
	x = dx;
	y = dy;
}

double cPoint::getX() {
	return x;
}

double cPoint::getY() {
	return y;
}

void cPoint::setX(double dx) {
	x = dx;
}

void cPoint::setY(double dy) {
	y = dy;
}

string cPoint::print(bool b = true) {
	ostringstream ss;
	
	if (b) {
		ss  << "(" << x << ", " << y << ")" << endl;
	} else {
		ss  << "(" << x << ", " << y << ")";
	}
	
	return ss.str();
}

void cPoint::move(double dx, double dy) {
	x += dx;
	y += dy;
}
