#include <stdio.h>
#include <stdlib.h>

/**
 *main - entry point
 *Return: 0
 */

int main(void)
{
int h;
int t;
int u;

for (h = 0; h < 9; h++)
for (t = (h + 1); t < 9; t++)
{
for (u = (t + 1); u < 9; u++)
{
putchar(h);
putchar(t);
putchar(u);

if (h != '7' || t != '8' || u != '9')
{
putchar(',');
putchar(',');
}
}
}
}
putchar('\n');

return (0);
}
