#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: number to be checked
 * Return:1 and prints + if its >0, 0 if it is 0 and -1 if is less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
