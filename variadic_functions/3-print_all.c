#include <stdio.h>
#include <stdarg.h>

void print_one(char c, va_list args)
{
	char *s;

	switch (c)
	{
		case 'c':
		printf("%c", va_arg(args, int));
		break;

		case 'i':
		printf("%i", va_arg(args, int));
		break;

		case 'f':
		printf("%f", va_arg(args, double));
		break;

		case 's':
		s = va_arg(args, char *);
		if (s == NULL)
		s = "(nil)";
		printf("%s", s);
		break;
	}
}

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	int sep = 0;

	va_start(args, format);

	while (format && format[i])
	{

		if (format[i] == 'c' || format[i] == 'i' ||
		format[i] == 'f' || format[i] == 's')
		{

			while (sep == 1)
			{
				printf(", ");
				sep = 0;
			}

			print_one(format[i], args);
			sep = 1;
		}

		i++;
	}

	va_end(args);
	printf("\n");
}
