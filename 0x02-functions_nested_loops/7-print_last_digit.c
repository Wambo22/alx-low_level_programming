#include 'main.h'
/**
 * main - Entry point
 * Description: prints the last number of a digit
 *
 * Return the value of last digit
 */
void int print_last_digit(void)
{
int ld = n % 10;

if (ld < 0)
	ld * = -1;

_putchar (ld + '0');

return (0);
}
