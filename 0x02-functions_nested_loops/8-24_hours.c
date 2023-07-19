#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * jack_bauer - Entry point
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
int h1 = 0, h2 = 0, m1 = 0, m2 = 0;

while (h2 < 7)
{
while (h1 < 10)
{
while (m2 < 7)
{
while (m1 < 10)
{
_putchar(h2);
_putchar(h1);
_putchar(':');
_putchar(m2);
_putchar(m1);
m1++;
}
m2++;
}
h1++;
}
h2++;
}
}
