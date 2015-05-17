#include <stdio.h>

int main() {
  int n, i = 0;
  double min = 0, max = 0, curr, sum = 0;
  printf("Wie viele Elemente sollen erzeugt werden?  ");
  scanf("%d", &n);
  printf("\nEs werden %d Elemente erzeugt.\n", n);
  // Array mit n-Feldern deklarieren
  double array[n];

  // n-Zahlen eingeben lassen
  while(i < n) {
    printf("[%d] eingeben: ", i);
    scanf("%lf", &curr);
    // Array befüllen
    array[i] = curr;
    // Max/Min validieren
    if(i == 0) min = curr;
    if(curr > max) max = curr;
    if(curr < min) min = curr;
    // Summe errechnen
    sum += curr;
    // Zähler erhöhen
    i++;
  }

  printf("Max: %lf\nMin: %lf\nSumme: %lf\n", max, min, sum);

  return 0;
}
