#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * print_alphabet - print_alphabet - a function that prints the alphabet, in lowercase
 *
 * Return: Always success
 */
void print_alphabet(void)
{

int n;

for (n = 'a'; n <= 'z'; n++)
{

_putchar(n);

}
_putchar('\n');
}
