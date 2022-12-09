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

	i = 97;
	while (i < 123)
	{
	if (i != 101 && i != 113)
	{
	putchar(i);
	}
	i++;
	}
	putchar('\n');
	return (0);
}
