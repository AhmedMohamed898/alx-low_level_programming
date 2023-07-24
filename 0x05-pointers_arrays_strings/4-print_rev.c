#include "main.h"

/**
 * print_rev - check the code
 *@s: paramter
 * Return: Always 0.
 */

void print_rev(char *s)
{
int count;
for (count = _strlen(s); count > 0; count--)
{
puts(s + count);
}
}
