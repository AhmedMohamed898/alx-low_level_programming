#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;

	for (i = '1'; i < 10; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
