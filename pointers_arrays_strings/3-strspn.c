#include "main.h"

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

