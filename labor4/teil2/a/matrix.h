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
    // Constructor
    Zeile( int s) {
      // Allocate memory
      this->z = new int[s];
      this->size = s;
    }

    // Destruktor
    ~Zeile() {
      delete[] this->z;
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

  public:
    // Overloaded constructor
    Matrix( int _nrows , int _ncols) {
      nrows = _nrows;
      ncols = _ncols;
      mat = new Zeile*[_nrows];
      for(int i = 0; i < _nrows; i++) {
        mat[i] = new Zeile(_ncols);
      }
    }

    // Overloaded constructor
    Matrix( int z, int s, int wert) {
      nrows = z;
      ncols = s;
      mat = new Zeile*[z];
      for(int i = 0; i < z; i++) {
      	mat[i] = new Zeile(ncols);
        for(int j = 0; j < s; j++) {
          (*mat[i])[j] = wert;
        }
      }
    }

    // Copy constructor
    Matrix( const Matrix &m) {
      nrows = m.getRows();
      ncols = m.getCols();
      mat = new Zeile*[nrows];
      for(int i = 0; i < nrows; i++) {
        mat[i] = new Zeile(ncols);
        for(int j = 0; j < ncols; j++) {
          (*mat[i])[j] = m[i][j];
        }
      }
    }

    ~Matrix() {
      for(int i = 0; i < nrows; i++) {
        // Delete each row
        delete mat[i];
      }
      // Delete all pointers to a row
      delete[] mat;
    }

    // Zuweisungsoperator für tiefe Kopie
    Matrix& operator=( const Matrix& ma ) {
      assert(this->nrows == ma.getRows() || this->ncols == ma.getCols());
      for(int i = 0; i < nrows; i++) {
        for(int j = 0; j < ncols; j++) {
          (*mat[i])[j] = ma[i][j];
        }
      }
    }

    int getRows() const { return nrows; }
    int getCols() const { return ncols; }

    // Indexoperator [] (in zwei Versionen) für die Klasse Matrix
    inline Zeile& operator[](int i) {
      assert(i >= 0 && i < nrows );
      return *mat[i];
    }

    inline const Zeile& operator[](int i) const {
      assert(i >= 0 && i < nrows );
      return *mat[i];
    }

    // Transponierte der Matrix
    Matrix transpose() {
      Matrix m1(ncols, nrows);
      
      for(int i = 0; i < ncols; i++) {
        for(int j = 0; j < nrows; j++) {
          m1[i][j] = (*mat[j])[i];
        }
      }
      return m1;
    }

    // Ausgabefunktion, i.e. print() oder operator<<
    //void print();
    friend std::ostream& operator<<(std::ostream& os, const Matrix& m);

    friend Matrix operator+(const Matrix& ma, const Matrix& mb);
    friend Matrix operator*(const Matrix& ma, const Matrix& mb);
};

// zwei globale Operatorfunktionen für Addition und Multiplikation
Matrix operator+(const Matrix& ma, const Matrix& mb) {
  Matrix mc(ma.getRows(), ma.getCols());

  for(int i = 0; i < ma.getRows(); i++) {
    for(int j = 0; j < ma.getCols(); j++) {
      mc[i][j] = ma[i][j] + mb[i][j];
    }
  }
  return mc;
}

Matrix operator*(const Matrix& ma, const Matrix& mb) {
  Matrix mc(ma.nrows, mb.ncols);
  
  for(int i = 0; i < ma.getRows(); i++) {
    for(int j = 0; j < mb.getCols(); j++) {
      for (int k = 0; k < ma.getCols(); k++) {
        mc[i][j] += (ma[i][k] * mb[k][j]);
      }
    }
  }
  return mc;
}

std::ostream& operator<<(std::ostream& os, const Matrix& m) {
  for (int i = 0; i < m.getRows(); i++) {
    for (int j = 0; j < m.getCols(); j++) {
      if (j > 0) os << "   ";
      os << m[i][j];
    }
    os << endl;
  }
  return os;
}

#endif
