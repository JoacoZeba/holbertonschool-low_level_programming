#include "main.h"
/**
 * void print_alphabet_x10(void) - prints 10x times the alphabet
 */
void print_alphabet_x10(void)
{
	char l;
	int v = 1;

	while (v <= 10)
	{
		for (l = 'a'; l <= 'z'; l++)
		{
			_putchar(l);
		}
		_putchar('\n');
		v++;
	}

}
