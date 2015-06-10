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

  // public:
    // TODO: Zwei Konstruktoren, ein Kopierkonstruktor und ein Destruktor
    Matrix( int _nrows , int _ncols) {
      mat = new Zeile*[_nrows];
      for(int i = 0; i < _nrows; i++) {
        *mat[i] = new Zeile*[_ncols];
      }
    };

    Matrix( int z, int s, int wert) {
      mat = new Zeile*[z];
      for(int i = 0; i < z; i++) {
        *mat[i] = new Zeile*[s];
        for(int j = 0; j < s; j++) {
          mat[i][j] = wert;
        }
      }
    };

    Matrix( const Matrix &m) {
      mat = new Zeile*[m.nrows];
      for(int i = 0; i < m.nrows; i++) {
        *mat[i] = new Zeile*[m.ncols];
        for(int j = 0; j < m.ncols; j++) {
          this->mat[i][j] = m.mat[i][j];
        }
      }
    };

    ~Matrix() {
      for(int i = 0; i < nrows; i++) {
        for(int j = 0; j < ncols; j++) {
          delete[] mat[i][j];
        }
      }
    };

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
