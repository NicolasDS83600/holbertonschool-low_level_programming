#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to the string to be reversed
 *
 * Description: Reverses the string in place by swapping
 * characters from the start and end moving towards the center.
 */
void rev_string(char *s)
{
char *start = s;
char *end = s;
char temp;
	if (!s)
	return;

	while (*end != '\0')
	end++;
	end--;

	while (start < end)
	{
	temp = *start;
	*start = *end;
	*end = temp;
	start++;
	end--;
	}
}
