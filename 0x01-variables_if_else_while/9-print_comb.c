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

	i = 49;
	while (i < 58)
	{
	putchar(i);
	if (i != 57)
	{
	putchar(',');
	putchar(' ');
	}
	i++;
	}
	putchar('\n');
	return (0);
}
