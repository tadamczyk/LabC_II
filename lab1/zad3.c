//Napisać programy testujące działanie operatorów z efektami ubocznymi
//w różnych sytuacjach, od których może zależeć wynik działania.

#include <stdio.h>
int main()
{
	char z;
	for(;(z=getchar())!=EOF;printf("%c",z));
	return 0;
}
