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

	int i = 0, type = 0;
	char *str;

	va_start(args, format);

	while (format[i] != '\0')
	{
		type = 0;
		switch (format[i])
		{
			case 'c':
				type = 1;
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				type = 1;
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				type = 1;
				printf("%f", va_arg(args, double));
				break;
			case 's':
				type = 1;
				str = va_arg(args, char *);
				if (str == NULL)
					printf("(nil)");
				else
					printf("%s", str);
				break;
			default:
				i++;
				continue;
		}
		if (format[i + 1] != '\0' && type == 1)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}
