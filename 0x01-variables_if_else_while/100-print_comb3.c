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
	int j;

	for (i = 48; i < 58; i++)
	{
	for (j = i + 1; j < 58; j++)
		{
		putchar(i);
		putchar(j);
		if (i < 56)
		{
		putchar(',');
		putchar(' ');
		}
		}
	}
	return (0);
}
