#include <vector>
using namespace std;
class IntMenge {
  public:
    IntMenge();
    void hinzufuegen(int el);
    void entfernen(int el);
    bool istMitglied(int el) const;
    int size() const;
    void anzeigen() const;
    void loeschen();
    int getMax() const;
    int getMin() const;
  private:
    vector<int> vec;
    int finden(int el);
};
