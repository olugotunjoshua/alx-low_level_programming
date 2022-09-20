#include "main.h"
/**
 * _strlen - check code
 * @s: - character to check
 * Return: length
 */

int _strlen(char *s)
{
size_t length = 0;
while (*s++)
	length++;
return (length);
}
