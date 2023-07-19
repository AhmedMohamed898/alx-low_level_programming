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
return (1);
putchar('+');
}
else if (n == 0)
{
	putchar('0');
	putchar('0');
	return (0);
}
else 
{
putchar('-');
putchar('1');
return (-1);
}

}
