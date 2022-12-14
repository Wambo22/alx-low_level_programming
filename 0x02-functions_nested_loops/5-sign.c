#include 'main.h'
/**
 * main - Entry point
 * Description: print the sign of a number
 *
 * Return 0
 */
void print_sign(void);
{
	if (n > 0)
	{
	_putchar ('+');
	return (1);
	}
	else if (n == 0)
	{
	_putchar ('0');
	return (0);
	}
	else
	{
	_putchar ('-');
	return (-1);
}
return (0);
}

