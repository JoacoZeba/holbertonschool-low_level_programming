#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10
 * starting from 0
 * Return:0
 */
int main(void)
{
	char number;

	for (number = 48; number <= 57; number++)
	{
		putchar(number);
	}
	putchar('\n');
	return (0);
}
