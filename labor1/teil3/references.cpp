#include <iostream> // In- and Output
#include <string>   // String for our structure
using namespace std;

// Prototype declaration
void showSizes();

// Students struct
struct student {
  int id;
  string name, studiengang;
  float note;
  bool bestanden;

  // Constructor
  student (int i, string na, string sg, float no, bool b) : id(i), name(na), studiengang(sg), note(no), bestanden(b) {}

  // Print the students information
  void showStudent() {
    cout << "ID:\t\t"        << id          << endl;
    cout << "Name:\t\t"      << name        << endl;
    cout << "Studiengang:\t" << studiengang << endl;
    cout << "Note:\t\t"      << note        << endl;
    cout << "Bestanden:\t"   << bestanden   << endl   << endl;
  }
};

int main () {
  // initialized students
  struct student studentarr[3] = {
    student(1, "Friedrich", "BWL", 2.0, true),
    student(2, "Christian", "VWL", 3.4, true),
    student(3, "Carina", "KoDe", 1.0, true)
  };

  // References
  float& ref1 = studentarr[0].note;
  struct student& ref2 = studentarr[1];
  bool& ref3 = ref2.bestanden;

  cout << "Ref1: Expected Output [" << studentarr[0].note << "] and is [" << ref1 << "]." << endl;
  cout << "Ref2: Expected Output [" << studentarr[1].bestanden << "] and is [" << ref3 << "]" << endl;
}

