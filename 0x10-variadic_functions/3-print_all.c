#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed to the function
 * Return: the answer
 */
void print_all(const char * const format, ...)
{
	va_list args;

	int i = 0;
	char *s;

	va_start(args, format);

	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					printf("(nil)");
				else
					printf("%s", s);
				break;
			default:
				break;
		}
		i++;
		if (format[i] != '\0')
			printf(", ");
	}
	printf("\n");
	va_end(args);
}
