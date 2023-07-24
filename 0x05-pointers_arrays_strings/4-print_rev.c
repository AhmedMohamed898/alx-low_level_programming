#include "main.h"
#include <string.h>
/**
 * print_rev - check the code
 *@s: paramter
 * Return: Always 0.
 */

void print_rev(char *s)
{
int count = strlen(s);
for (; count > 0; count--)
{
putchar(*(s + count));
}
putchar('\n');
}
