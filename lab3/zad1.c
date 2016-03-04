#include <stdio.h>
#include <limits.h>
#include <float.h>
int main()
{
  printf("short\n%d\n%i\n%i\n-\n-\n\n", sizeof(short), SHRT_MIN, SHRT_MAX);
  printf("int\n%d\n%i\n%i\n-\n-\n\n", sizeof(int), INT_MIN, INT_MAX);
  printf("long\n%d\n%li\n%li\n-\n-\n\n", sizeof(long), LONG_MIN, LONG_MAX);
  printf("long long\n%d\n%lli\n%lli\n-\n-\n\n", sizeof(long long), LLONG_MIN, LLONG_MAX);
  printf("float\n%d\n%Le\n%Le\n%Le\n%Le\n\n", sizeof(float), FLT_MIN, FLT_MAX, FLT_EPSILON, FLT_DIG);
  printf("double\n%d\n%Le\n%Le\n%Le\n%Le\n\n", sizeof(double), DBL_MIN, DBL_MAX, DBL_EPSILON, DBL_DIG);
  printf("long double\n%d\n%Le\n%Le\n%Le\n%Le\n\n", sizeof(long double), LDBL_MIN, LDBL_MAX, LDBL_EPSILON, LDBL_DIG);
  return 0;
}
