#include <stdio.h>
<<<<<<< HEAD
//This is the line causing issue in the conflict branch
=======

//This is the line causing issue in the conflict branch
>>>>>>> conflict
int main ()
{
<<<<<<< HEAD
	int x = 10, c = 5;
=======
	int x = 10, c = 5;
>>>>>>> testing

	printf(" %2i + %2i = %2i \n", x, c, x + c );
	printf(" %2i - %2i = %2i \n", x, c, x - c );
	printf(" %2i x %2i = %2i \n", x, c, x * c );
	printf(" %2i / %2i = %2i \n", x, c, x / c );
	printf(" %2i modulus %2i = %2i \n", x, c, x % c);

	return 0;

}
