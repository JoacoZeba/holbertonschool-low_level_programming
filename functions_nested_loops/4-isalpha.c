#include "main.h"
/**
 * _isalpha - cheks if a char is an alphabetic char or not no matter
 * lower or uppercase
 * Return:1 if c is an alphabetic char and 0 if its not
 * @c: char to be checked
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
	return (1);
	}
	return (0);
}
