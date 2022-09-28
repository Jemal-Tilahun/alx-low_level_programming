#include "main.h"

/**
 * factorial - Calculate the factorial of a numbe
 * @n: the neber
 *
 * Return: Integer value
 */
int factorial(int n)
{
if (n < 0)
return (-1);
if  (n <= 1)
return (1);

return (n * factorial(n - 1));
}
