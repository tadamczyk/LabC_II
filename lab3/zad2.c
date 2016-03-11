// W każdym typie liczbowym znaleźć możliwie małe dane, na których wynik jakiegoś działania matematycznego jest już niepoprawny.

#include <stdio.h>
int main()
{
  short shr=1;
  short shr2=1/2;
  printf("Short: %i / 2 = %i\n", shr, shr2);
  int in=1;
  int in2=in/4;
  printf("Int: %i / 4 = %i\n", in, in2);
  long lg=1;
  long lg2=lg+0.5;
  printf("Long: %li + 0.5 = %li\n", lg, lg2);
  long long llg=1;
  long long llg2=llg+0.99;
  printf("Long long: %lli + 0.99 = %lli\n", llg, llg2);
  float fl=0.000001;
  float fl2=fl/2.0;
  printf("Float: %f / 2 = %f\n", fl, fl2);
  double dl=0.000003;
  double dl2=dl/4.0;
  printf("Double: %f / 4 = %f\n", dl, dl2);
  long double ldl=0.00000000000000005;
  long double ldl2=dl/4.0;
  printf("Long double: %Lf / 4 = %Lf\n", ldl, ldl2);
  return 0;
}
