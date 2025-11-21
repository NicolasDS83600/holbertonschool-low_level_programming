#include <stdarg.h>
#include <stdio.h>

/**
* print_all - prints anything according to a format string
* @format: list of types of arguments passed to the function
*          (c = char, i = int, f = float, s = char *)
*/
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, sep = 0;
	char *s;

	va_start(args, format);
	while (format && format[i])
	{
		if (sep)
		printf(", ");

		switch (format[i])
		{
			case 'c':
			printf("%c", va_arg(args, int));
			sep = 1;
			break;
			case 'i':
			printf("%d", va_arg(args, int));
			sep = 1;
			break;
			case 'f':
			printf("%f", va_arg(args, double));
			sep = 1;
			break;
			case 's':
			s = va_arg(args, char *);
			if (!s)
			printf("(nil)");
			printf("%s", s);
			sep = 0;
			break;
			default:
			sep = 0;
			break;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
