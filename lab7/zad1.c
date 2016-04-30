// Napisać program od_konca.c , którego wywołanie z argumentami spowoduje wypisanie tych argumentów w odwrotnej kolejności.
// Np. wywołanie:     ./od_konca  Ty. gdzie tam, zawsze tam, Byc
// wydrukuje tekst:   Byc tam, zawsze tam, gdzie Ty.

#include <stdio.h>
#include <string.h>
int main(int argc, char* argv[])
{
  int i;
  for(i=argc-1; i>0; i--)
  {
    printf("%s ", argv[i]);
  }
  return 0;
}
