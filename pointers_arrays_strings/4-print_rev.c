#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: pointer to the string to print
 *
 * Description: This function prints the characters of a string
 * from the end to the beginning using _putchar.
 */
void print_rev(char *s)
{
int i = 0;
int b;
while (s[i] != '\0')
{
i++;
}
for (b = i - 1; b >= 0; b--)
{
_putchar(s[b]);
}
_putchar('\n');
}
