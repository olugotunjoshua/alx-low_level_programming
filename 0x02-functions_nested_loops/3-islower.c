#include "main.h"
#include <stdlib.h>
/**
 _islower - Check for lowercase characters
 * char type letter
 *Return: 1 if character is lowercase, 0 if otherwise
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
} 
}

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
  int r;

r = _islower('H');
putchar(r + '0');
r = _islower('o');
_putchar(r + '0');
r = _islower(108);
_putchar(r + '0');
_putchar('\n');
return (0);
}
