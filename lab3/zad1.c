// Napisać program, który bada poznane typy liczbowe w C, tzn. ustala:
// * ilość bajtów, przeznaczonych na zmienną (operator sizeof),
// * największą i najmniejszą wartość liczby,
// * ,,ziarno'', czyli najmniejszą taką liczbę x, że 1.0+x≠1.0 ,
//* ,,precyzję'', czyli maksymalną liczbę cyfr dziesiętnych po kropce.

#include <stdio.h>
#include <limits.h>
#include <float.h>
int main()
{
  printf("Liczba zajmowanych bajtow:\n");
  printf("short:\t\t%li\n", sizeof(short));
  printf("int:\t\t%li\n", sizeof(int));
  printf("long:\t\t%li\n", sizeof(long));
  printf("long long:\t%li\n", sizeof(long long));
  printf("float:\t\t%li\n", sizeof(float));
  printf("double:\t\t%li\n", sizeof(double));
  printf("long double:\t%li\n\n", sizeof(long double));
  printf("Dolna wartosc:\n");
  printf("short:\t\t%i\n", SHRT_MIN);
  printf("int:\t\t%i\n", INT_MIN);
  printf("long:\t\t%li\n", LONG_MIN);
  printf("long long:\t%lli\n", LLONG_MIN);
  printf("float:\t\t%e\n", FLT_MIN);
  printf("double:\t\t%e\n", DBL_MIN);
  printf("long double:\t%Le\n\n", LDBL_MIN);
  printf("Gorna wartosc:\n");
  printf("short:\t\t%i\n", SHRT_MAX);
  printf("int:\t\t%i\n", INT_MAX);
  printf("long:\t\t%li\n", LONG_MAX);
  printf("long long:\t%lli\n", LLONG_MAX);
  printf("float:\t\t%e\n", FLT_MAX);
  printf("double:\t\t%e\n", DBL_MAX);
  printf("long double:\t%Le\n\n", LDBL_MAX);
  printf("Ziarno:\n");
  printf("float:\t\t%e\n", FLT_EPSILON);
  printf("double:\t\t%e\n", DBL_EPSILON);
  printf("long double:\t%Le\n\n", LDBL_EPSILON);
  printf("Precyzja:\n");
  printf("float:\t\t%i\n", FLT_DIG);
  printf("double:\t\t%i\n", DBL_DIG);
  printf("long double:\t%i\n\n", LDBL_DIG);
  return 0;
}
