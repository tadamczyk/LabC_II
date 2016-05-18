// Napisać program, który:
// * wczytuje dwie liczby całkowite n i k;
// * deklaruje dwie tablice rzeczywiste 1-wymiarowe a i b o długości n·k;
// * ,,udaje'', że obie tablice są 2-wymiarowe -- że tablica a jest 2-wymiarowa n×k, i że tablica b jest 2-wymiarowa k×n;
// * wczytuje n·k liczb do tablicy a;
// * wykonuje transpozycję macierzy a do tablicy b;
// * drukuje tablicę b w k wierszach po n liczb.

#include <stdio.h>
int main()
{
  int n, k;
  printf("Liczba wierszów i kolumn: \n");
  scanf("%i %i", &n, &k);
  int tab[n*k], tab2[k*n];
  int m = n*k, i, wi, ko;
  printf("Wypelnianie tablicy %i x %i \n",n,k);
  for(i=0; i<m; i++) scanf("%i", &tab[i]);
  printf("\nWyswietlanie tablicy tab \n");
  for(ko=0; ko<k; ko++)
  {
    for(wi=0; wi<n; wi++)
    {
      printf("%i ", tab[ko*k+wi]);
    }
    printf("\n");
  }
  printf("Transpozycja tablicy tab w tab2: \n");
  for(wi=0; wi<n; wi++)
  {
    for(ko=0; ko<k; ko++)
    {
      tab2[wi*k+ko] = tab[ko*k+wi];
    }
  }
  printf("Wyswietlanie tablicy tab2: \n");
  for(ko=0; ko<k; ko++)
  {
    for(wi=0; wi<n; wi++)
    {
      printf("%i ",tab2[ko*k+wi]);
    }
    printf("\n");
  }
  return 0;
}
