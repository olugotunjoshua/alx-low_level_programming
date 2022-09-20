#include "main.h"
/**
 * _puts - character check
 * @str: check code
 *
 */

void _puts(char *str)
{
while (*str)
	_putchar(*str++);
_putchar('\n');
}
