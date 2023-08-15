#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
* main - Prints the alphabet
*
* Return: always 0 (Success)
*/
int main(void)
{

	int n;

	for (n = 48; n < 58 ; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
