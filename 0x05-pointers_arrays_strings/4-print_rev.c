#include "main.h"
/**
 * print_rev - to print strings in reverse form
 * @s: check codr
 */
void print_rev(char *s)
{ 
	int a;
	a = 0;

	while (s[a] != '\0')
		a++;
	for (a -= 1; a >= 0; a--)
		putchar(s[a]);
	putchar('\n');
}
