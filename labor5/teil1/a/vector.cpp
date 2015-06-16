// Datei: vector.cpp
#include "vector.h"

// Überladener Konstruktor
Vector::Vector( int a ) : anzahl(a) {
	v = new int[a];
	for ( int i = 0; i < a; i++ ) {
    v[i] = i;
  }
}

// Kopierkonstruktor
Vector::Vector( const Vector& vec ) {
  this->anzahl = vec.anzahl;
  this->v = new int[vec.anzahl];
  for (int i = 0; i < vec.anzahl; i++) {
    this->v[i] = vec.v[i];
  }
}

// Destruktor
Vector::~Vector() {
  delete[] v;
}

bool kleiner( const int& a, const int& b ) {
	return ( a < b );
}

int Vector::min() const {
	int min = v[0];
	for ( int i = 1; i < anzahl; i++ ) {
    if ( v[i] < min ) min = v[i];
	}
	return min;
}

int Vector::getAnzahl() const {
  return this->anzahl;
}

// Überladener Index-Operator
int Vector::operator[] ( const int i ) const {
  return this->v[i];
}

void Vector::setVector( int* sv, int sanzahl ) {
	delete[] v; // alten Inhalt loeschen
	anzahl = sanzahl;
	v = new int[anzahl];
	for ( int i = 0; i < anzahl; i++ ) {
    v[i] = sv[i];
  }
	return;
}

ostream& operator<< ( ostream& os, const Vector& v ) {
	for ( int i = 0; i < v.anzahl; i++ ) {
    os << v[i] << ", ";
  }
	return os;
}
