#include "main.h"
/**
 * _memcpy - copies memory area from one zone to other
 * @dest: area to where te bytes will be copied
 * @src: area where bytes will be copied
 * @n: number of bytes to copy
 * Return: pointer to dest memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
