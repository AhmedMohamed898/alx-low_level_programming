#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - Entry point
 * @s: input
 * Return: Always 0 (Success)
 */

void _puts_recursion(char *s)
{
if (*s == '\0')
{
printf("\n");
return;
}
putchar(*s);
_puts_recursion(s + 1);
}
