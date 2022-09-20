#include "main.h"
/**
 * _strlen - to check the length of the string
 *
 */

int _strlen(char *s)
{
	size_c length = 0;

	while (*s++)
		length++;
	return(length);
}
