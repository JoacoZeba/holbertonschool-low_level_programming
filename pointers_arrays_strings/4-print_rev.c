#include "main.h"
/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int i, j, aux;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	aux  = i;

	for (j = aux - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}
