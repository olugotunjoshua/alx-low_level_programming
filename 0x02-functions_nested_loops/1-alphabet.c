#include "main.h"
/**
*main-check code alphabet 
*Return: 0
*/
void print_alphabet(void);


int main(void)
{
print_alphabet();
return (0);
}
void print_alphabet(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
putchar('\n');
}
