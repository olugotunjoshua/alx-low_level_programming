#include "main.h"
/**
 * print_rev - to print strings in reverse form
 * @s: check codr
 */
void print_rev(char *s)
{
	while (*s--)
		putchar(*s--);
	putchar('\n');
}
