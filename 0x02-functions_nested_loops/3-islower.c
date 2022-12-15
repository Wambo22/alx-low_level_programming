#include "main.h"
#include <stdio.h>

/**
 *_islower - checks for lowercase character
 *
 * Description: checks if a character is lowercase
 * @c: First operand
 *
 * Return: 1 if letter is lowercase, 0 if not
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
	return (0);
}
