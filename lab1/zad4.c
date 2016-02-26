// Co wydrukuje następujący fragment programu:
// n=0;
// if (n=0)   printf("rowne\n");
// else   printf("nierowne\n");
// Należy zwrócić uwagę, że w warunku powyższej instrukcji if występuje przypisanie = a nie porównanie ==.

#include <stdio.h>
int main()
{
  int n=0;
  if (n=0) printf("rowne\n");
  else printf("nierowne\n");
  return 0;
}

// Program wypisze slowo "nierowne".
