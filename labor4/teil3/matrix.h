// ------------------------------------------------------
// matrix.h: Darstellung von dynamischen Matrizen
// ------------------------------------------------------

#ifndef _MATRIX_H_
#define _MATRIX_H_

#include <iostream>
#include <cassert>
using namespace std;

template <class T>
class Zeile {
  private:
    T *z;
    int size;

  public:
    // Constructor
    Zeile( int s) {
      // Allocate memory
      this->z = new T[s];
      this->size = s;
    }

    // Destruktor
    ~Zeile() {
      delete[] this->z;
    }

    // Indexoperator [] ist (in zwei Versionen) bereits implementiert für die Klasse Zeile
    T& operator[](int i) {
      assert(i >= 0 && i < size);
      return z[i];
    }

    const T& operator[](int i) const {
      assert(i >= 0 && i < size);
      return z[i];
    }
};

template <class T>
class Matrix {
  private:
    T **mat; // Zeiger auf "Zeilen"-Vektor
    int nrows, ncols; // Zeilen- und Spaltenzahl

  public:
    // Overloaded constructor
    Matrix( int _nrows , int _ncols) {
      nrows = _nrows;
      ncols = _ncols;
      mat = new T*[_nrows];
      for(int i = 0; i < _nrows; i++) {
        mat[i] = new T [_ncols];
      }
    }

    // Overloaded constructor
    Matrix( int z, int s, T wert) {
      nrows = z;
      ncols = s;
      mat = new T*[z];
      for(int i = 0; i < z; i++) {
      	mat[i] = new T(ncols);
        for(int j = 0; j < s; j++) {
          (*mat[i])[j] = wert;
        }
      }
    }

    // Copy constructor
    Matrix( const Matrix &m) {
      nrows = m.getRows();
      ncols = m.getCols();
      mat = new T*[nrows];
      for(int i = 0; i < nrows; i++) {
        mat[i] = new T(ncols);
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
    inline T& operator[](int i) {
      assert(i >= 0 && i < nrows );
      return (T) *mat[i];
    }

    inline const T& operator[](int i) const {
      assert(i >= 0 && i < nrows );
      return (T) *mat[i];
    }

    // Transponierte der Matrix
    Matrix transpose() {
      Matrix m1(ncols, nrows);

      for(int i = 0; i < ncols; i++) {
        for(int j = 0; j < nrows; j++) {
          m1[i][j] = (T) (*mat[j])[i];
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
template <class T>
Matrix<T> operator+(const Matrix<T>& ma, const Matrix<T>& mb) {
  Matrix<T> mc(ma.getRows(), ma.getCols());

  for(int i = 0; i < ma.getRows(); i++) {
    for(int j = 0; j < ma.getCols(); j++) {
      mc[i][j] = ma[i][j] + mb[i][j];
    }
  }
  return mc;
}

template <class T>
Matrix<T> operator*(const Matrix<T>& ma, const Matrix<T>& mb) {
  Matrix<T> mc(ma.nrows, mb.ncols, 0);

  for(int i = 0; i < ma.getRows(); i++) {
    for(int j = 0; j < mb.getCols(); j++) {
      for (int k = 0; k < ma.getCols(); k++) {
        mc[i][j] += (ma[i][k] * mb[k][j]);
      }
    }
  }
  return mc;
}

template <class T>
std::ostream& operator<<(std::ostream& os, const Matrix<T>& m) {
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
