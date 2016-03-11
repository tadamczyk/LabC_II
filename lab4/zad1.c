// Opracować zestaw operacji na liczbach zespolonych potrzebny do prawidłowego działania tego programu.
// W tym celu należy prototypy (nagłówki) podanych tam funkcji, realizujących działania, zastąpić lub uzupełnić pełnymi definicjami działań.
// Oczywiście dla napisania tych funkcji, potrzebne jest zastosowanie własnej wiedzy o liczbach zespolonych (np. z algebry).
/*
#include <stdio.h>        Standard Library of Input and Output
#include <complex.h>      Standard Library of Complex Numbers

int main() {

    double complex z1 = 1.0 + 3.0 * I;
    double complex z2 = 1.0 - 4.0 * I;

    printf("Working with complex numbers:\n\v");

    printf("Starting values: Z1 = %.2f + %.2fi\tZ2 = %.2f %+.2fi\n", creal(z1), cimag(z1), creal(z2), cimag(z2));

    double complex sum = z1 + z2;
    printf("The sum: Z1 + Z2 = %.2f %+.2fi\n", creal(sum), cimag(sum));

    double complex difference = z1 - z2;
    printf("The difference: Z1 - Z2 = %.2f %+.2fi\n", creal(difference), cimag(difference));

    double complex product = z1 * z2;
    printf("The product: Z1 x Z2 = %.2f %+.2fi\n", creal(product), cimag(product));

    double complex quotient = z1 / z2;
    printf("The quotient: Z1 / Z2 = %.2f %+.2fi\n", creal(quotient), cimag(quotient));

    double complex conjugate = conj(z1);
    printf("The conjugate of Z1 = %.2f %+.2fi\n", creal(conjugate), cimag(conjugate));

    return 0;
}
*/
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
/****************************************************************/
// DEFINICJA TYPU LICZB ZESPOLONYCH:
typedef struct
{
  double rea, ima;
} zespol;
/****************************************************************/
// POMOCNICZE:
void err(char s[])
{
  // -- sygnalizacja bledu wejscia
  printf("\n!!! FUNKCJA zesp_get: %s !!!\n\n", s);
  exit(1);
}
/****************************************************************/
// INICJALIZACJE oraz WEJSCIE-WYJSCIE:
zespol zesp_zestawic(double r, double i)
{
  // zestawienie liczby zespolonej z dwoch rzeczywistych
  zespol z;
  z.rea=r;
  z.ima=i;
  return z;
}
zespol zesp_get(void)
{
  /* wczytanie liczby zespolonej; powinna skladac sie z dwoch
  rzeczywistych, oraz plusa lub minusa miedzy nimi, zaczynac sie od
  nawiasu otwierajacego, konczyc sie litera ,,i'' oraz nawiasem
  zamykajacym;
  np. (123.45 + 67.89i)
  */
  char ch;
  zespol z;
  int znak_im;
  do
  {
    ch=getchar();
  } while(isspace(ch));
  if(ch=='(')
  {
    if(scanf("%lf", &(z.rea))==1)
    {
      do
      {
        /* code */
      } while(/* condition */);
      {
        ch = getchar();
      } while(isspace(ch));
      if(ch=='+' || ch=='-')
      {
        if(ch=='+') znak_im=1;
        else znak_im=-1;
        if(scanf("%lf", &(z.ima))==1)
        {
          do
          {
            ch=getchar();
          } while(isspace(ch));
          if(ch=='i')
          {
            do
            {
              ch=getchar();
            } while(isspace(ch));
            if(ch==')')
            {
              if(znak_im==-1) z.ima=-z.ima;
            } else err("brak koncowego nawiasu");
          } else err("brak 'i' na koncu czesci urojonej");
        } else err("niepoprawna czesc urojona");
      } else err("po czesci rzeczywistej brak znaku '+' lub '-'");
    } else err("niepoprawna czesc rzeczywista");
  } else err("brak rozpoczynajacego nawiasu");
  return z;
}
void zesp_print(zespol z)
{
  // drukowanie liczby zespolonej
  if(z.ima>=0) printf("(%.2lf+%.2lfi)", z.rea, z.ima);
  else printf("(%.2lf-%.2lfi)", z.rea, -z.ima);
}
/****************************************************************/
// DZIALANIA:
zespol zesp_dodac(zespol z1, zespol z2);
  // dodawanie liczb zespolonych
zespol zesp_odjac(zespol z1, zespol z2);
  // odejmowanie liczb zespolonych
zespol zesp_razy(zespol z1, zespol z2);
  // mnozenie liczb zespolonych
zespol zesp_sprzez(zespol z);
  // liczba sprzezona do danej zespolonej
double zesp_abs(zespol z);
  // wartosc bezwzgledna liczby zespolonej
/****************************************************************/
int main()
{
  zespol z1, z2;
  printf("z1 == "); z1 = zesp_get();
  printf(" z2 == "); z2 = zesp_get();
  printf("\nz1+z2 == "); zesp_print(zesp_dodac(z1, z2));
  printf("\nz1-z2 == "); zesp_print(zesp_odjac(z1, z2));
  printf("\nz1*z2 == "); zesp_print(zesp_razy(z1, z2));
  printf("\n|z1+z2| == %.4lf\n\n", zesp_abs(zesp_dodac(z1, z2)));
  return 0;
}
