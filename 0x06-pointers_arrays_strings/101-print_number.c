#include "main.h"
/**
 * print_number - print any number with putchar
 * @n: number to be print
 *
 * Return: nothing
 */

void print_number(int n)
{

unsigned int x;

if (n < 0)
{
_putchar('_');
n *= -1;
}
x = n;

if ((x / 10) > 0)
print_number(x / 10);

_putchar(x % 10 + '0');
}
