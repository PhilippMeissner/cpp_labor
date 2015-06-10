// ------------------------------------------------------
// matrix.h: Darstellung von dynamischen Matrizen
// ------------------------------------------------------

#ifndef _MATRIX_H_
#define _MATRIX_H_

#include <iostream>
#include <cassert>
using namespace std;

class Zeile {
  private:
    int *z;
    int size;

  public:
    // TODO: Konstruktor und Destruktor
    Zeile( int s);
    ~Zeile();

    // Indexoperator [] ist (in zwei Versionen) bereits implementiert für die Klasse Zeile
    int& operator[](int i) {
      assert(i >= 0 && i < size);
      return z[i];
    }

    const int& operator[](int i) const {
      assert(i >= 0 && i < size);
      return z[i];
    }
};

class Matrix {
  private:
    Zeile **mat; // Zeiger auf "Zeilen"-Vektor
    int nrows, ncols; // Zeilen- und Spaltenzahl

  public:
    // TODO: Zwei Konstruktoren, ein Kopierkonstruktor und ein Destruktor
    Matrix( int _nrows , int _ncols);
    Matrix( int z, int s, int wert);
    Matrix( const Matrix& );
    ~Matrix();

    // TODO: Zuweisungsoperator für tiefe Kopie (falls in Vorlesung besprochen)
    Matrix& operator=( const Matrix& ma );
    int getRows() const { return nrows; }
    int getCols() const { return ncols; }

    // TODO: Indexoperator [] (in zwei Versionen) für die Klasse Matrix
    Zeile& operator[](int i);
    const Zeile& operator[](int i) const;

    // TODO: Transponierte der Matrix
    Matrix transpose();

    // TODO: Ausgabefunktion, i.e. print() oder operator<<
    void print();
    // friend std::ostream& operator<<(std::ostream& os, const Matrix& m);

    friend Matrix operator+(const Matrix& ma, const Matrix& mb);
    friend Matrix operator*(const Matrix& ma, const Matrix& mb);
};

// TODO: zwei globale Operatorfunktionen für Addition und Multiplikation
Matrix operator+(const Matrix& ma, const Matrix& mb);
Matrix operator*(const Matrix& ma, const Matrix& mb);

#endif
