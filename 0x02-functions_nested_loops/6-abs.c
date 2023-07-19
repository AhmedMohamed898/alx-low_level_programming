#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * @c: describe the parameter
 * _abs - Entry point
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
