// Napisać program, który:
// * wczytuje trzy liczby całkowite n, m i k;
// * deklaruje trzy duże tablice rzeczywiste 1-wymiarowe a, b i c;
// * ,,udaje'', że tablice a, b i c są 2-wymiarowe, o wymiarach n×m, m×k i n×k;
// * wczytuje n·m liczb do tablicy a oraz m·k liczb do tablicy b;
// * wykonuje mnożenie macierzowe c=a×b;
// * drukuje wynik w n wierszach po k liczb.

#include <stdio.h>
int main()
{
  int m, n, p, q, y, x, k, suma = 0;
  printf("Liczba wierszów i kolumn pierwszej macierzy:\n");
  scanf("%d %d", &m, &n);
  int pierwsza[m][n];
  printf("Wprowadz elementy macierzy 1.:\n");
  for(y=0; y<m; y++)
    for(x=0; x<n; x++)
      scanf("%d", &pierwsza[y][x]);
  printf("Liczba wierszów i kolumn drugiej macierzy:\n");
  scanf("%d %d", &p, &q);
  int druga[p][q];
  int trans[m][q];
  if(n != p) printf("Macierze nie moga byc pomnozone! Kolumny macierzy 1 nie sa rowne liczbie wierszy macierzy 2!\n");
  else
  {
    printf("Wprowadz elementy macierzy 2.:\n");
    for(y=0; y<p; y++)
      for(x=0; x<q; x++)
        scanf("%d", &druga[y][x]);
    for(y=0; y<m; y++)
    {
      for(x=0; x<q; x++)
      {
        for(k=0; k<p; k++)
        {
          suma = suma + pierwsza[y][k]*druga[k][x];
        }
        trans[y][x] = suma;
        suma = 0;
      }
    }
    printf("Wynik mnozenia macierzy: \n");
    for(y=0; y<m; y++)
    {
      for(x=0; x<q; x++)
        printf("%d\t", trans[y][x]);
      printf("\n");
    }
  }
  return 0;
}
