#include <vector>
using namespace std;
class IntMenge {
  public:
    IntMenge();
    void hinzufuegen(int el);
    void entfernen(int el);
    bool istMitglied(int el);
    int size();
    void anzeigen();
    void loeschen();
    int getMax();
    int getMin();
  private:
    vector<int> vec;
    int finden(int el);
};
