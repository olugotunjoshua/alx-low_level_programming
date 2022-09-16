#include "main.h"
/**
 *print_alphabet_x10 - print alphabets in lowest form
 *
 *Return: 0
 */


void print_alphabet_x10(void)
{
int r;
for (r = 0; r < 11; r++)
{
for (char c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
putchar('\n');
}
}
