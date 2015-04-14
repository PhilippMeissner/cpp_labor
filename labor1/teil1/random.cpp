#include <stdlib.h> // Includes random-functions
#include <time.h>   // Includes current time for srand-seed
#include <iostream> // Input and outputs
using namespace std;

int main () {
  srand(time(NULL));
  float sum, mw, mini, maxi, counter, curr_num;

  // We need 5 runs
  for ( int i = 1; i <= 5; i++ ) {

    // Reset all variables per run.
    sum       = 0;
    mw        = 0;
    mini      = 1;
    maxi      = 0;
    counter   = 0;

    while ((curr_num = (static_cast<float> (rand())) / RAND_MAX) <= 0.85) {

      counter++;
      sum += curr_num;

      // We have a new maximum
      if ( curr_num > maxi) {
        maxi = curr_num;
      }

      // We have a new minimum
      if ( curr_num < mini ) {
        mini = curr_num;
      }

      // Print our current number
      cout << "[" << i << "] ";
      cout << curr_num << endl;

    }
    // Make sure there is numbers to calculate something
    if (counter) {
      mw = sum / counter;
      cout << "Zufallswerte insgesamt:\t" << counter << endl;
      cout << "Minimum:\t\t" << mini << endl;
      cout << "Maximum:\t\t" << maxi << endl;
      cout << "Mittelwert:\t\t" << mw << endl << endl;
    } else {
      cout << "Die erste Zufallszahl war bereits groß genug, um die Schleife zu unterbrechen." << endl << endl;

    }
 }

  return 0;
}
