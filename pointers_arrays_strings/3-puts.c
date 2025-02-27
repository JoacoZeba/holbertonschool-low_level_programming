#include "main.h"
/**
 * _puts - prints a string
 * @str: pointer to the string to print
 */
void _puts(char  *str)
{
	int s;

	for (s = 0; str[s] != '\0'; s++)
	{
		_putchar(str[s]);
	}
	_putchar('\n')
}
