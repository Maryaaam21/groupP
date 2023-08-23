#include "main.h"

/**
* print_str - prints a string
* @n: char that keeps the count
* @args: the va_list type variable that 
* contains argumments
*
* Return: the number of string characters printed
*/

int _print_str(char *str)
{
	int n = 0;

	while (*str != '\0')
	{
		_putchar(*str);
		n++;
		str++;
	}
	return (n);
}
