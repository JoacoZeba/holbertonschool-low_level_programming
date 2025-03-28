#include "main.h"
#include <stddef.h>

/**
 * *_strstr - search string in string
 * @haystack: string
 * @needle: string
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int lenHay = 0, lenNeed = 0, cont = 0, aux, check = 1;

	while (haystack[lenHay] != 0)
		lenHay++;
	while (needle[lenNeed] != 0)
		lenNeed++;
	while (lenHay >= lenNeed && haystack[cont])
	{
		check = 1;
		for (aux = 0; needle[aux] != 0 && check; aux++)
		{
			if (haystack[cont + aux] != needle[aux])
				check = 0;
		}
		if (aux == lenNeed)
		{
			return (haystack + cont);
		}
		cont++;
		lenHay--;
	}
	return (NULL);
}
