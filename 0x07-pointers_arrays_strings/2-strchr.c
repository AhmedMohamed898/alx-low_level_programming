#include <stddef.h>
#include "main.h"
/**
 * _strchr - fill a block of memory with a specific value
 * @s: starting address of memory to be filled
 * @c: the desired value
 *
 * Return: changed array with new value for n bytes
 */
char *_strchr(char *s, char c)
{
int i = 0;
int size = sizeof(s);
for (; i < size; i++)
{
if (s[i] == c)
{
return (s + i);
}
}
if (i >= size)
{
return (NULL);
}
}
