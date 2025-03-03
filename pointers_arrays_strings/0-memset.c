#include "main.h"
/**
 * *memset - fills the pointed memory with a constant byte
 * @s:area of the memory
 * @b:constant byte to fill
 * @n:number of bytes to be filled
 * Return: pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
