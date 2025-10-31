#include "main.h"

/**
 * puts_half - prints the second half of a string,
 * followed by a new line
 * @str: the string to print
 *
 * Description: If the number of characters is odd,
 * the function prints the last n characters of the string,
 * where n = (length_of_the_string + 1) / 2.
 */
void puts_half(char *str)
{
int len = 0;
int n;

while (str[len] != '\0')
len++;

if (len % 2 == 0)
n = len / 2;
else
n = (len + 1) / 2;

while (str[n] != '\0')
{
_putchar(str[n]);
n++;
}
_putchar('\n');
}
