#include "main.h"

/**
 * _puts - thoroughly prints strings to stdout as puts
 * @s: pointer to strings to be written/printed to stdout
 * Return: total characters printed by _puts function to stdout
 */

int _puts(char *s)
{
	int char_count = 0;

	while (*s)
	{
		_putchar(*s);
		char_count++;
		s++;
	}

	return (char_count);

}
