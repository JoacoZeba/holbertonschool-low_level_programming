#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string to count
 * Return: number of chars in the string
 */
int _strlen(char *s)
{
	int c;

	c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	return (c);
}
