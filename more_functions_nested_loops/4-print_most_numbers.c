#include "main.h"
/**
 * print_most_numbers - prints most numbers from 1-9 except 2 and 4
 */
void print_most_numbers(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		if (num != '2' && num != '4')
		{
			_putchar(num);
		}
	}
		_putchar('\n');
}
