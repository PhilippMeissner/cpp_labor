// Datei: vector.h

#ifndef _VECTOR_H_
#define _VECTOR_H_

#include <iostream>

using namespace std;

template <class T>
class Vector {
  private:
    T* v;
    int anzahl;
  public:
    Vector<T>(int anzahl = 10);
    Vector<T>( const Vector<T>& vec ); // Kopierkonstruktor
    ~Vector<T>();
    T min() const;
    int getAnzahl() const;
    T operator[]( const int i ) const;
    void setVector( T* sv, int sanzahl);
};

#endif
