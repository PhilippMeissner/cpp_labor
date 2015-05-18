#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, i;
  double min = 0, max = 0, curr, sum = 0, *pNum;

  printf("Wie viele Elemente sollen erzeugt werden?  ");
  scanf("%d", &n);
  printf("\nEs werden %d Elemente erzeugt.\n", n);

  pNum = (double *)malloc(n * sizeof(double));

  // n-Zahlen eingeben lassen
  for(i = 0; i < n; i++) {
    // Zahl einlesen
    printf("[%d] eingeben: ", i);
    scanf("%lf", &curr);

    // Zahl speichern
    *(pNum + i) = curr;

    // Min/Max validieren
    if(i == 0) min = curr;
    if(curr > max) max = curr;
    if(curr < min) min = curr;
    // Summe errechnen
    sum += curr;
  }
  // Ergebnisse ausgeben
  printf("Max: %lf\nMin: %lf\nSumme: %lf\n", max, min, sum);

  return 0;
}
