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
	const char *p;
	int d = 0;

	va_start(args, format);
	p = format;

	while (p != NULL && *p != '\0')
	{
		switch (*p)
		{
			case 'c':
			{
				char c = (char) va_arg(args, int);

				if (d)
				printf(", ");
				printf("%c", c);
				d = 1;
				break;
			}

			case 'i':
			{
				int i = va_arg(args, int);

				if (d)
				printf(", ");
				printf("%d", i);
				d = 1;
				break;
			}

			case 'f':
			{
				double d = va_arg(args, double);

				if (d)
				printf(", ");
				printf("%f", d);
				d = 1;
				break;
			}

			case 's':
			{
				char *s = va_arg(args, char *);

				if (d)
				printf(", ");

				if (s == NULL)
				printf("(nil)");

				else
				printf("%s", s);
				d = 1;
				break;
			}

			default:
			break;
		}

		p++;
	}

	va_end(args);

	printf("\n");
}
