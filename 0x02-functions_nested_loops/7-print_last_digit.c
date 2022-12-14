#include "main.h"
/**
 * main - Entry point
 * Description: prints the last number of a digit
 *
 * Return the value of last digit
 *
 */
void print_last_digit(int)
{
int n;
int ld;

ld = n % 10;
if (ld < 0)
	ld * = -1;

_putchar (ld + '0');
}
