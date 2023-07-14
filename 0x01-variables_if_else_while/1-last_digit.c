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
	firstDigit = n;
	while(firstDigit >= 10)
	{
		firstDigit /= 10;
	}
	if (firstDigit > 5)
	{
		printf("Last digit of %d is %d and greater than 5", n, firstDigit);
	}
	else if (firstDigit == 0)
	{
		printf("Last digit of %d is %d and is 0", n, firstDigit);
	}
	else 
	{
 		printf("Last digit of %d is %d and is less than 6 and not 0", n, firstDigit);
	}
	return (0);
}
