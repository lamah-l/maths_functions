#include <stdio.h>

int main ()
{
	int x = 10, c = 5;

	printf(" %2i + %2i = %2i \n", x, c, x + c );
	printf(" %2i - %2i = %2i \n", x, c, x - c );
	printf(" %2i x %2i = %2i \n", x, c, x * c );
	printf(" %2i / %2i = %2i \n", x, c, x / c );
	printf(" %2i modulus %2i = %2i \n", x, c, x % c);

	return 0;

}
