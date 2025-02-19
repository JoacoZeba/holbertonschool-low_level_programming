#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - assign a random number to a variable n each time
 * it is executed
 * Return:0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10
	printf("Last digit of %d is %d and is last_digit", n, last_digit)
	if ("last_digit > 5")
		printf("greater than 5")
	else if (last_digit == 0)
		printf("ïs 0")
	else (last_digit < 6)
		printf("is less than 6 and not 0")
	return (0);
}
