#include "main.h"
/**
 * _islower - checks if a char is lowercase or not
 * Return:1 if is lowercase 0 if its not
 * @c: char to be checked
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
