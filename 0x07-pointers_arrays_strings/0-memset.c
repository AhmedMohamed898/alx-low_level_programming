#include "main.h"
/**
 * *_memset - Fills a memory region with a constant byte.
 * @s: A pointer to the starting memory location.
 * @b: The number of bytes to fill.
 * @n: The byte value to fill the memory with.
 * @return: return value
 *This function fills the specified memory region with the given constant byte.
 */

char *_memset(char *s, char b, unsigned int n)
{
int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
