#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * print_alphabet - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	{
		putchar(c);
	}
	putchar('\n');
}
