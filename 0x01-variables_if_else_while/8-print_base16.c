#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase
 */
int main(void)
{
	int a;
	char l;

	for (a = 0; a < 10; a++)
		 putchar((a % 10) + '0');

	 for (l = 'a'; l <= 'f'; l++)
		 putchar(l);


	 putchar(l);

	 return (0);
}
