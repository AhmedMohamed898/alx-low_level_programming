#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function islower goes there */
/**
 * _islower - Entry point
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
if (c >= 97 || c <= 122)
{
return (1);
}
else
{
return (0);
}

}