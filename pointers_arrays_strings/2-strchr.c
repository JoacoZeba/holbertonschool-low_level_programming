#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a char in a string
 * @s:string to find the char on
 * @c: char to be found
 * Return: a pointer to the char c or NULL if there isnt one
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
