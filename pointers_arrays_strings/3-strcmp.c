#include "main.h"
/**
 * *_strcmp - compare 2 strings
 *@s1: string 1
 *@s2: string 2
 *Return: s1-s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, res = 0;

	while (s1[i] != 0 && s2[i] != 0 && !res)
	{
		if (s1[i] != s2[i])
		{
			res = s1[i] - s2[i];
		}
		i++;
	}
	return (res);
}
