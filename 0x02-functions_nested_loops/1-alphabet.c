#include "main.h"
/**
*print_alphabet check code  
*Return: 0
*/
void print_alphabet(void);

void print_alphabet(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
putchar('\n');
}
