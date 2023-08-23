#include "main.h"

/**
 * _putchar - prints and returns a char (one byte) to stdout
 * @c: provided character to be written on stdout
 * Return: one i.e a character printed, else -1 on failure
 */

int _putchar(char c)
	return (write(1, &c, 1));
