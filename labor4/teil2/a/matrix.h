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
    Zeile( int s) {
      // Allocate memory
      this->z = new int[s];
      this->size = s;
    };

    ~Zeile() {
      delete[] z;
    }

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

    Matrix( int _nrows , int _ncols) {
      mat = new Zeile*[_nrows];
      for(int i = 0; i < _nrows; i++) {
        mat[i] = new Zeile[_ncols];
      }
    }

    Matrix( int z, int s, int wert) {
      mat = new Zeile*[z];
      for(int i = 0; i < z; i++) {
        for(int j = 0; j < s; j++) {
          // *mat[i]      --> Pointer to value in row i
          // (*mat[i])[j] --> Value in row i at col j
          (*mat[i])[j] = wert;
        }
      }
    }

    // TODO: Implement copy constructor
    Matrix( const Matrix &m) {}

    ~Matrix() {
      for(int i = 0; i < nrows; i++) {
        // Delete each row
        delete mat[i];
      }
      // Delete all pointers to a row
      delete[] mat;
    }

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
