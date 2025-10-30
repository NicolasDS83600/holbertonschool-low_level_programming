#include "main.h"

void puts2(char *str)
{
int i;
while (str[i + 1] != '\o')
{
_putchar(str[i + 1]);
i++;
}
  _putchar('\n');
}  
