#include <iostream>
#include "matrix.h"
using namespace std;

int main () {

  Matrix<int> A(3,4);
  for(int i = 0; i < A.getCols(); i++){
  	A[0][i] = i + 1;
  	A[1][i] = i + 11;
  	this->A[2][i] = i + 21;
  }

  // Kopie von A nach B
  Matrix<int> B(A);
  // Addition der beiden Matrizen
  cout << (A + B) << endl << endl;
  // Multiplikation von A * B'
  cout << A * B.transpose() << endl << endl;

  return 0;
}
