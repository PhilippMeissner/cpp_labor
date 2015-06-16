#include <iostream>
#include "matrix.h"
using namespace std;

int main () {

  // Testing double
  Matrix<double> A(3,4);
  for(int i = 0; i < A.getCols(); i++){
  	A[0][i] = (i + 1.00)/10.00;
  	A[1][i] = (i + 11.00)/10.00;
  	A[2][i] = (i + 21.00)/10.00;
  }

  // Kopie von A nach B
  Matrix<double> B(A);
  // Addition der beiden Matrizen
  cout << (A + B) << endl << endl;
  // Multiplikation von A * B'
  cout << A * B.transpose() << endl << endl;

  // Testing int
  Matrix<int> C(3,4);
  for(int i = 0; i < C.getCols(); i++){
  	C[0][i] = i + 1.00;
  	C[1][i] = i + 11.00;
  	C[2][i] = i + 21.00;
  }

  // Kopie von C nach D
  Matrix<int> D(C);
  // Addition der beiden Matrizen
  cout << (C + D) << endl << endl;
  // Multiplikation von C * D'
  cout << C * D.transpose() << endl << endl;

  return 0;
}
