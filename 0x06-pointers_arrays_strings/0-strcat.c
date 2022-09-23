#include "main.h"
/**
 * _strcat - a code fir concatenating two strings
 * @dest: check code
 * @src: check the code
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
int a = 0;
int b = 0;
while (dest[a] != '\0')
	a++;
while (src[b] != '\0')
{
	dest[a] = src[b];
	a++;

	b++;
}
dest[a] = '\0';

return (dest);
}
