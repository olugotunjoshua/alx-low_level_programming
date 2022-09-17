#include <stdio.h>
#include <stdlib.h>

void print_alphabet(void);
void print_alphabet_x10(void);
int _islower(int c);

int main(void)
{
int r;

r = _islower('H');
_putchar(r + '0');
r = _islower('o');
_putchar(r + '0');
r = _islower(108);
_putchar(r + '0');
_putchar('\n');
return (0);
}
