#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * string_nconcat - Concatenates two strings up to n bytes.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of bytes from s2 to concatenate.
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

unsigned int len1 = strlen(s1);
unsigned int len2 = strlen(s2);
unsigned int totalLength = len1 + (n < len2 ? n : len2) + 1;

char *result = (char *)malloc(totalLength);

if (result == NULL)
return (NULL);

strcpy(result, s1);
strncat(result, s2, n);

return (result);
}
