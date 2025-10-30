#include "main.h"

void puts2(char *str)
{
int i;
while (str[i + 1] != '\0')
{
_putchar(str[i + 1]);
i++;
}
  _putchar('\n');
}  
