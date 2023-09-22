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
	int count = 0;
	int divisor = 1;
	int digit;

	if (n < 0)
	{
		count += _putchar('-');
		if (n == INT_MIN)
		{
			n = -(n + 1);
			count += 1;
		}
		else
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
/**
 * handle_error - handle the appropriate errors
 *
 * Return: -1
 */
int handle_error(void)
{
	return (-1);
}
/**
 * print_binary - handles the specifier %b
 * @n: number
 *
 * Return: binary
 */
int print_binary(unsigned int n)
{
	int count = 0, i;
	int binary[32];

	for (i = 31; i >= 0; i--)
	{
		binary[i] = n % 2;
		n /= 2;
	}
	for (i = 0; i < 32; i++)
		count += _putchar('0' + binary[i]);
	return (count);
}
