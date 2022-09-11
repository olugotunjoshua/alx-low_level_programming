#include <stdio.h>
#include <stdlib.h>
/**
 * main- Entry point
 *
 *Return: Alwas (0)
 */

int main(void)
{

char low = 'a';
char upp = 'A';
for (low = 'a'; low <= 'z'; low++)
{
putchar(low);
}
for (upp = 'A'; upp <= 'Z'; upp++)
{
putchar(upp);
}
putchar('\n');
return (0);
}
