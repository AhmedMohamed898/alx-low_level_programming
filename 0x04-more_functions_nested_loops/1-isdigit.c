#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * _isdigit - Entry point
 *@c: parameter
 * Return: Always 0 (Success)
 */
int _isdigit(int c)
{
if ((c >= 0 && c <= 9) || (c >= '0' && c <= '9'))
{
return (1);
}
else
{
return (0);
}
}
