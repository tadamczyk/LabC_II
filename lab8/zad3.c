// Program potrzebuje czytania wielu danych rzeczywistych i całkowitych z klawiatury; 
// za każdym razem powinien napisać na monitorze, jakiej zmiennej potrzebuje i poczekać,
// aż użytkownik wpisze odpowiednią daną. Napisać makrodefinicję CZYT, która to realizuje.
// Na przykład wywołanie makra CZYT(a,<lf) powinno spowodowac wydruk
// Podaj wartosc a:
// a następnie wczytanie liczby rzeczywistej do zmiennej a.
// Oczywiście jeśli drugim argumentem makra jest i, to chodzi o wczytanie liczby całkowitej.

#include <stdio.h>
#define CZYT(zm,tp) printf("Podaj zmienna %s: ", #zm);scanf("%"#tp,&zm);
int main()
{
  double a;
  CZYT(a, lf);
  printf("\n%lf\n", a);
  return 0;
}
