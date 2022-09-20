#include "main.h"
/**
 * _strlen - to check the length of the string
 *@s-check character
 *Return:length
 */

int _strlen(char *s)
{
	size_t length = 0;

	while (*s++)
		length++;
	return(length);
}
