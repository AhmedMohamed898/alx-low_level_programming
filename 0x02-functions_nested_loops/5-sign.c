#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * print_sign - Entry point
 * @c: describe the parameter
 * Return: Always 0 (Success)
 */
int print_sign(int n)
{
if (n > 0)
{
	putchar('+');
	putchar(',');
	return (1);
}
else if (n == 0)
{
	putchar('0');
	putchar(',');
	return (0);
}
else 
{
putchar('-');
putchar(',');
return (-1);
}

}