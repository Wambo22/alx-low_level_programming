#include <stdio.h>
#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * print_alphabet_x10 - prints 10 times the alphabet
 *
 * Return: Always 0 (success)
 */
void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i < 10)
	{
		c = 'a';

		while (c <= 'z')
		{
		putchar(c);
		c++;
		}
		putchar('\n');
		i++;
	}
}
