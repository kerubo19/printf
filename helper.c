#include "main.h"

/**
 * print_string - prints a string
 * @s: the string to print
 *
 * Return: the number of characters printed
 */
int print_string(char *s)
{
	int i = 0;

	if (s == NULL)
		s = "(null)";
	while (s[i])
	{
		if (s[i] == '\0')
		{
			_putchar('\\');
			_putchar('0');
		}
		else
			_putchar(s[i]);
		i++;
	}
	return (i);
}

/**
 * print_integer - prints an integer
 * @n: integer
 *
 * Return: integer
 */
int print_integer(int n)
{
	int count = 0, divisor = 1, digit;

	if (n < 0)
	{
		count += _putchar('-');
		n = -n;
	}
	while (n / divisor >= 10)
		divisor *= 10;
	while (divisor != 0)
	{
		digit = (n / divisor) % 10;
		count += _putchar('0' + digit);
		divisor /= 10;
	}
	return (count);
}
