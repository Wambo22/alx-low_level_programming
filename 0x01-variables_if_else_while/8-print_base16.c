#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
* main - Entry point
*
* Return: Always 0 (success)
*/
int main(void)
{
	int i;

	i = 48;
	while (i < 58)
	{
	putchar(i);
	i++;
	}
	i = 97;
	while (i < 103)
	{
	putchar(i);
	i++;
	}
	putchar('\n');
	return (0);
}
