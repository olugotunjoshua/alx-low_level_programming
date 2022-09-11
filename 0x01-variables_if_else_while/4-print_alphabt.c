#include <stdio.h>
#include <stdlib.h>
/**
 *main- Entry point
 *
 *Return: Always (0) success
 */

int main(void)
{
char low = 'a';

for (low = 'a'; low <= 'z'; low++)
{
if (low != 'e' && low != 'q')
putchar (low);
}
putchar ('\n');

return (0);
}
