#include "main.h"
/**
 *_atoi -converts
 *@s : character to check
 *Return:0 if there are number
 */

int _ atoi(char *s)
{
	int sn = 1;
	unsigned int n = 0;
do {
	if (*s == '-')
	sn *= -1;

	else if (*s >= '0' && *s <= '9')
	n = (n * 10) + (*s - '0');
	else if (n > 0)
	break;


} while (*s++);
return (n * sn);
}
