#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * print_last_digit - Entry point
 * c: parameter
 * Return: Always 0 (Success)
 */
int print_last_digit(int c)
{
int lastDigit;

lastDigit = c % 10;
_putchar(lastDigit + '0');
return (lastDigit);
}
