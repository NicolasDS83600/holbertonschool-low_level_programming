#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 *
 * Description: Numbers are separated by a comma and a space,
 * and printed in order. The last number is always 98.
 */
void print_to_98(int n)
{
if (n <= 98)
{
while (n < 98)
{
printf("%d, ", n);
n++;
}
}
else
{
while (n > 98)
{
printf("%d, ", n);
n--;
}
}
printf("98\n");
}
