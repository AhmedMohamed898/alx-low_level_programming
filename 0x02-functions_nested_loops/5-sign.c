#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
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
	_putchar('+');
	return (1);
}
else if (n == 0)
{
	_putchar(48);
	return (0);
}
else 
{
putchar('-');
return (-1);
}

}
