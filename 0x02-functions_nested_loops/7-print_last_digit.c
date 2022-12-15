#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - last digit of a number
 *
 * @n: First Parameter
 *
 * Return the value of last digit
 *
 */
void print_last_digit(int n)
{
int ld;

ld = n % 10;
if (ld < 0)
	ld * = -1;

putchar (ld + '0');
}
