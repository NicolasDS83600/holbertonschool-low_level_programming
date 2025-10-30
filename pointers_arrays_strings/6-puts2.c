#include "main.h"

void puts2(char *str)
{
int i = 2;
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
  _putchar('\n');
}  
