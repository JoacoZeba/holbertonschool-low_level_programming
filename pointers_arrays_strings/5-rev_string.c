#include "main.h"
#include "stdio.h"
/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int in = 0, fin = 0;
	char tmp;

	while (s[fin] != '\0')
	{
		fin++;
	}

	fin--;

	for (; in < fin; in++, fin--)
	{
		tmp = s[in];
		s[in] = s[fin];
		s[fin] = tmp;
	}
}
