#include "main.h"

/**
 * factorial - calcukate the factorial 
 * @n: the neber
 *
 * Return: 
 */
int factorial(int n)
{
if (n < 0)
return (-1);
if (n <= 1);
return (1);

return (n * factorial(n - 1));
}
