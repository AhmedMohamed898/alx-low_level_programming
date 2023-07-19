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
int h1 = 0, h2 = 0, m1 = 0, m2 = 0;

while (h2 < 3)
{
if (h1 == 4 && h2 ==2)
{
break;
}
while (h1 < 10)
{
while (m2 < 6)
{
while (m1 < 10)
{
_putchar(h2 + '0');
_putchar(h1 + '0');
_putchar(':');
_putchar(m2 + '0');
_putchar(m1 + '0');
_putchar('\n');
m1++;
}
m2++;
m1 = 0;
}
h1++;
m1 = 0;
m2 = 0;
}
m1 = 0;
m2 = 0;
h2++;
h1 = 0;
}
}
