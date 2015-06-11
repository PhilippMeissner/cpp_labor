#include <iostream>
#include "matrix.h"
using namespace std;

int main () {

  Matrix A(3,4);
  for(int i = 0; i < A.getCols(); i++){
    A[0][i] = i+1;
    A[1][i] = i+11;
    A[2][i] = i+21;
  }
  Matrix B(A);
  cout << (A+B) << endl;
  cout << (A*B.transpose()) << endl;
  return 0;
}
