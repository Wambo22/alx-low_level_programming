#include "main.h"

/**
 * int _strlen - returns legth of string
 * @s: input strlen retuen
 * Return: length of string
 */
int _strlen(char *s)
{
int count = 0;

while (*(s + count) != '\0')
	count++;

return (count);
}
