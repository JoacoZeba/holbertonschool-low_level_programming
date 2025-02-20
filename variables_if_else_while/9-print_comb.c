#include <stdio.h>
/**
 * main - prints single digit numbers separated by a ","
 * Return:0
 */
int main(void)
{
	char num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');
		if (num < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
