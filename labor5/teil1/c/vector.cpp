// Datei: vector.cpp
#include "vector.h"
using namespace std;

// Überladener Konstruktor
template <class T>
Vector<T>::Vector( int a ) : anzahl(a) {
  v = new T[a];
  for ( int i = 0; i < a; i++ ) {
    v[i] = i;
  }
}

// Kopierkonstruktor
template <class T>
Vector<T>::Vector( const Vector<T>& vec ) {
  this->anzahl = vec.anzahl;
  this->v = new T[vec.anzahl];
  for (int i = 0; i < vec.anzahl; i++) {
    this->v[i] = vec.v[i];
  }
}

// Destruktor
template <class T>
Vector<T>::~Vector() {
  delete[] v;
}

template <class T>
bool kleiner( const T& a, const T& b ) {
  return ( a.abstand00() < b.abstand00() );
  //return ( a < b );
}

template <class T>
T Vector<T>::min() const {
  T min = v[0];
  for ( int i = 1; i < anzahl; i++ ) {
    if ( v[i].abstand00() < min.abstand00() ) min = v[i];
    //if ( v[i] < min ) min = v[i];
  }
  return min;
}

template <class T>
int Vector<T>::getAnzahl() const {
  return this->anzahl;
}

// Überladener Index-Operator
template <class T>
T Vector<T>::operator[] ( const int i ) const {
  return this->v[i];
}

template <class T>
void Vector<T>::setVector( T* sv, int sanzahl ) {
  delete[] v; // alten Inhalt loeschen
  anzahl = sanzahl;
  v = new T[anzahl];
  for ( int i = 0; i < anzahl; i++ ) {
    v[i] = sv[i];
  }
}

template <class T>
ostream& operator<< ( ostream& os, const Vector<T>& v ) {
  for ( int i = 0; i < v.getAnzahl(); i++ ) {
    os << v[i] << ", ";
  }
  return os;
}
