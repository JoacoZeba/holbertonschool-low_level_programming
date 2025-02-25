#include "main.h"
/**
 * print_line - prints a straight line in the terminal
 * @n: number of times _ should be printed
 */
void print_line(int n)
{
	if (n <= '0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar('_');
	}
	_putchar('\n');
}
