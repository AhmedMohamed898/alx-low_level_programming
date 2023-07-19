#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * _abs - Entry point
 * @c: describe the parameter
 * Return: Always 0 (Success)
 */
int _abs(int c)
{
if (c < 0)
{
c = c * -1;
return (c);
}
return (c);
}
