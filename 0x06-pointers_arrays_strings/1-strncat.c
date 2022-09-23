#include "main.h"
/**
 * _strncat- concatenates two strin
 * @dest: character to check code
 * @src: character to check code
 * @n: integer to check code
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int d = 0;
int s = 0;
while (dest[d] != '\0')
	d++;
while (src[s] != src[d])
{
	dest[d] = src[s];
	d++;
	s++;
}
dest[d] = '\0';
Return(dest);
}
