#include "main.h"
/**
 * _isupper - checks if a char is lowercase or not
 * Return:1 if is uppercase 0 if its not
 * @c: char to be checked
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
	return (1);
	}
	return (0);
}
