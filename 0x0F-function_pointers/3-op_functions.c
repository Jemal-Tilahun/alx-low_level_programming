#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - ___
 * @a: ___
 * @b: ___
 *
 * Return: ___
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - ___
 * @a: ___
 * @b: ___
 *
 * Return: ___
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - ___
 * @a: ___
 * @b: ___
 *
 * Return: ___
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - ___
 * @a: ___
 * @b: ___
 *
 * Return: ___
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod- ___
 * @a: ___
 * @b: ___
 *
 * Return: ___
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

