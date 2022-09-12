#include <stdio.h>
#include <stdlib.h>
/**
 *main-Entry point
 *Return: 0
 */
int main(void)
{
char low  = 'z';
for (low = 'z'; low >= 'a'; low--)
{
putchar(low);
}
putchar ('\n');
return (0);
}
