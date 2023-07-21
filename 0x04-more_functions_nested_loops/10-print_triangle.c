#include "main.h"
/**
 * print_triangle - check the code
 *@size; parameter
 * Return: Always 0.
 */
void print_triangle(int size)
{
int i;
int j;
int space = size - 1;
int t = 0;

if (size <= 0)
{
_putchar('\n');
}
else
{
while (t < size)
{
for (i = 0; i < space; i++)
{
_putchar(' ');
}
for (j = size; j > space; j--)
{
_putchar('#');
}
_putchar('\n');
t++;
space--;
}
}
}
