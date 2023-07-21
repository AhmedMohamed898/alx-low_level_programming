#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
int i;
for (i = 1; i < 101; i++)
{
if (i == 100)
{
printf("%s", "Buzz");
}
else if ((i % 3) == 0 && (i % 5) == 0)
{
printf("%s", "FizzBuzz");
putchar(' ');
}
else if ((i % 3) == 0)
{
printf("%s", "Fizz");
putchar(' ');
}
else if ((i % 5) == 0)
{
printf("%s", "Buzz");
putchar(' ');
}
else
{
printf("%d", i);
putchar(' ');
}
}
return (0);
}
