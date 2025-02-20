#include <stdio.h>
/**
 * main - print all the numbers of base 16 in lowercase
 * Return:0
 */
int main(void)
{
	char b16;

	for (b16 = '0'; b16 <= '9'; b16++)
	{
		putchar(b16);
	}
	for (b16 = 'a'; b16 <= 'f'; b16++)
	{
		putchar(b16);
	}
	putchar('\n');
	return (0);
}
