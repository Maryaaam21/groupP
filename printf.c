#include "main.h"

int _printf(const char *format, ...);

/**
 * _printf - prints formatted string to stdout with stdarg.h
 * @format: buffer storing strings to be formatted & printed to stdout
 * @...: variable number of arguments that can be passed
 * Return: total character counts printed to stdout, without '/0'
 */

int _printf(const char *format, ...)
{
	int printed_char = 0;
	void *ptr;
	int n, n1, n2, n3, n4, n5, n6;
	char *str;
	va_list args;


	va_start(args, format);

	if (format == NULL)
		return (-1);
	while (*format && format)
	{
		if (*format == '%' && *(format + 1) == '\0')
			return (-1);
		else if (*format != '%')
		{
			_putchar(*format);
			printed_char++;
		}

		else
		{
			format++;
			switch (*format)
			{
				case 'c':
					_putchar(va_arg(args, int));
					printed_char++;
					break;
				case 'u':
					n2 = va_arg(args, unsigned int);

					printed_char += print_unsigned_bases(n2, 10);
					break;
				case 'x':
					n6 = va_arg(args, unsigned int);

					printed_char += print_unsigned_bases(n6, 16);
					break;
				case 'p':
					ptr = va_arg(args, void *);
					printed_char += print_mem_address(ptr);
					break;
				case 'r':
					str = va_arg(args, char *);
					printed_char += print_str_reverse(str);
					break;

				case 's':
					str = va_arg(args, char *);

					if (str == NULL)
						str = "(null)";
					if (*str)
						printed_char += _puts(str);
					break;
				case 'b':
					n1 = va_arg(args, unsigned int);

					printed_char += print_unsigned_bases(n1, 2);
					break;
				case 'X':
					n3 = va_arg(args, unsigned int);

					printed_char += print_unsigned_caps(n3, 16);
					break;
				case 'i':
					n4 = va_arg(args, int);

					printed_char += print_integers(n4);
					break;
				case 'd':
					n = va_arg(args, int);

					printed_char += print_integers(n);
					break;
				default:
					_putchar('%');
					_putchar(*format);
					printed_char += 2;
					break;
			}
		}

		format++;
	}
	va_end(args);
	return (printed_char);
}
