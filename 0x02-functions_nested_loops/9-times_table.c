#include 'main.h'
/**
 * main - Entry point
 * Description: print the 9 times table, starting with 0
 *
*/
void times_table(void)
{
	int num, mult, prod ;

        for (num = 0; num < = 9; num ++)
	{
 
	    putchar('0');

         for (mult = 1; mut < = 9; mult++)
	 {
	_putchar (',');
        _putchar (' ');

prod = num * mult;

if (prod < = 9)
	_putchar (' ');
else
	_putchar((prod / 10)+ '0');
        _putchar(prod % 10)+ '0');
	 }
	 _putchar ('\n');
	}
	return (0);
}
