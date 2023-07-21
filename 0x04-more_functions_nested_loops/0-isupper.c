#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
if (c >= 'A' && c<= 'Z')
{
return (1);
}
else
{
return (0);
}
}
