#include "main.h"

/**
 * print_diagonal - check the code
 *@n: parameter
 * Return: Always 0.
 */
void print_diagonal(int n)
{
int i;
int j;
if (n <= 0)
{
putchar('\n');
}
else
{
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
putchar(' ');
}
putchar('\\');
putchar('\n');
}
putchar('\n');
}
}
