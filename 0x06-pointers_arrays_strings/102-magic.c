#include <stdio.h>
/**
 * main - function main
 * Return: nothing
 */
int main(void)
{
int n;
int a[5];
int *p;

a[2] = 1024;
p = &n;
/*
 * write your line of code here...
 * - You are not allowed to use a
 * - You are not allowed to code anything
 */
*(p + 5) = 98;
/* ...so that this prints 98\n */
printf("a[2] = %d\n", a[2]);
return (0);
}
