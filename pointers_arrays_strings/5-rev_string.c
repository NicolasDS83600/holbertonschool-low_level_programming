#include "main.h"

void rev_string(char *s)
{
char *start = s;
char *end = s;
while (*start != '\0')
{
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
