#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, firstDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	firstDigit = n % 10;
	if (firstDigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, firstDigit);
	}
	else if (firstDigit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, firstDigit);
	} else
	{
	printf("Last digit of %d is %d", n, firstDigit);
	printf("and is less than 6 and not 0\n");
	}
	return (0);
}
