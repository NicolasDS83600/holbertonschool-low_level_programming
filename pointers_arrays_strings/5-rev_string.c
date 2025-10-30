#include "main.h"

void rev_string(char *s)
{
char *start = s;
char *end = s;
char temp;
while (*end != '\0')
end++;
end--;

while (start < end)
{
char temp = *start;
*start = *end;
*end = temp;
start++;
end--;
}
}
