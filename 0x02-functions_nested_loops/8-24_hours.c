#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * jack_bauer - Entry point
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
int a;
int b;
a = 0;
while (a <= 59)
{
b = 0;
while (b <= 59)
{
_putchar((a / 10) + '0');
_putchar((a % 10) + '0');
_puchar(':');
_putchar((b / 10) + '0');
_putchar((b % 10) + '0');
_putchar('\n');
b++;
}
a++
}
}
