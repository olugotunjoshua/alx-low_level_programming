#include <stdio.h>
#include <stdlib.h>

/**
 *main- entry point
 *
 *Return: always 0
 */

int main(void)
{
int n;
for (n = 11; n <= 34; n++)
{
putchar(n);
if (n == 34)

break;
putchar(',');
putchar(' ');
}

putchar('\n');
return (0);
}
