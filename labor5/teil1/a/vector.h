// Datei: vector.h

#ifndef _VECTOR_H_
#define _VECTOR_H_

#include <iostream>
using namespace std;

class Vector {
  private:
    int* v;
    int anzahl;

	public:
    Vector(int anzahl = 10);
    Vector( const Vector& vec ); // Kopierkonstruktor
    ~Vector();
    friend bool kleiner( const int& a, const int& b );
    int min() const;
    int getAnzahl() const;
    int operator[]( const int i ) const;
    void setVector( int* sv, int sanzahl);
    friend ostream& operator<< ( ostream& os, const Vector& v );
};

#endif
