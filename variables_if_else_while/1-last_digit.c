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
	
	return (0);
}
