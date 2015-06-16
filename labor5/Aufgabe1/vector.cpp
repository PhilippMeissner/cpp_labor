// Datei: vector.cpp

#include "vector.h"

Vector::Vector( int a ) : anzahl(a)
{
	v = new int[a];
	for ( int i = 0; i < a; i++ )
	v[i] = i;
}

Vector::Vector( const Vector& vec )
{
	…
}

Vector::~Vector()
{
	…
}

bool kleiner( const int& a, const int& b )
{
	return ( a < b );
}

int Vector::min() const
{
	int min = v[0];
	for ( int i = 1; i < anzahl; i++ )
	{
	if ( v[i] < min )
	min = v[i];
	}
	return min;
}

int Vector::getAnzahl() const
{
	…;
}

int Vector::operator[] ( const int i ) const
{
	…;
}

void Vector::setVector( int* sv, int sanzahl )
{
	delete[] v; // alten Inhalt loeschen
	anzahl = sanzahl;
	v = new int[anzahl];
	for ( int i = 0; i < anzahl; i++ )
	v[i] = sv[i];
	return;
}

ostream& operator<< ( ostream& os, const Vector& v )
{
	for ( int i = 0; i < v.anzahl; i++ )
	os << v[i] << ", ";
	return os;
}
