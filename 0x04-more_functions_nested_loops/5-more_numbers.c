#include "main.h"

/**
 * more_numbers- check the code
 *
 * Return: Always 0.
 */
int main(void)
{
int i;
int j;

for (i = 0; i < 10; i++)
{
for (j = 0; j < 15; j++)
{
if ((j / 10) > 0)
{
_putchar((j / 10) + '0');
}
_putchar('0' + (j % 10));
}
_putchar('\n');
j = 0;
}
return (0);
}

