#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: String to search
 * @accept: Characters to match
 *
 * Return: Number of bytes in the initial segment of s
 *         consisting only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	int i = 0, j;
	int count;

	while (s[i] != '\0')
	{
		count = 0;
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
			count = 1;
			break;
			}
			j++;
		}
		if (!count)
		break;
		len++;
		i++;
	}
	return (len);
}

