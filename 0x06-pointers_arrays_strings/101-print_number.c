#include "main.h"
#include <stdio.h>
/**
 * print_number - print any number with putchar
 * @n: number to be print
 *
 * Return: Always success
 */

void print_number(int n)
{

unsigned int x;

if (n < 0)
{
_putchar('-');
n *= -1;
}
x = n;

if (x / 10)
print_number(x / 10);
_putchar(x % 10 + '0');

}
