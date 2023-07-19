#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_to_98 - check the code
 * @n: parameter
 * Return: Always 0.
 */
void print_to_98(int n)
{
printf("%d", n);
if (n < 98)
{
printf(", ");
n++;
while (n < 98)
{
printf("%d, ", n);
n++;
}
printf("%d\n", 98);
}
else if (n > 98)
{
printf(", ");
n--;
while (n > 98)
{
printf("%d, ", n);
n--;
}
printf("%d\n", 98);
}
else if (n == 98)
{
printf("\n");
}
}

