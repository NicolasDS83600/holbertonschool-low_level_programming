#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the integer value of the string
 */
int _atoi(char *s)
{
int i = 0;
int sign = 1;
unsigned int n = 0;
int r = 0;

while (s[i] != '\0')
{
if (s[i] == '-')
sign *= -1;
else if (s[i] == '+')
sign *= 1;
else if (s[i] >= '0' && s[i] <= '9')
{
r = 1;
n = (n * 10) + (s[i] - '0');
}
else if (r)
break;
i++;
}
return (sign * n);
}
