#include "main.h"

/**
 * print_line - check the code
 *@n: paramter
 * Return: Always 0.
 */
void print_line(int n)
{
int i;
if (n <= 0)
{
putchar('\n');
}
else
{
for (i = 0; i < n; i++)
{
putchar('_');
}
putchar('\n');
}
}
