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

	char ch;

	for (ch = 'z'; ch >= 'a' ; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
