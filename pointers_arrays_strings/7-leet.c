"include "main.h"

char *leet(char *s)
{

	int i, j;
	char l[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
	{

		if (s[i] == l[j])
		{
			s[i] = num[j];
		}

	}
	}

	return (s);
}
