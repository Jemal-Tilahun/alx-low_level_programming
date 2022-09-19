#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - generate random vali pwd
 *
 * Return: Always zero
 */
int main(void)
{
char psd[84];
int index = 0, sum = 0, diff_half1, diff_half2;
srand(time(0));
while (sum < 2772)
{
psd[index] = 33 + rand() % 94;
sum += psd[index++];
}
psd[index] = '\0';
if (sum != 2772)
{
diff_half1 = (sum - 2772) / 2;
diff_half2 = (sum - 2772) / 2;
if ((sum - 2772) % 2 != 0)
diff_half1++;
for (index = 0; psd[index]; index++)
{
if (psd[index] >= (33 + diff_half1))
{
psd[index] -= diff_half1;
break;
}
}
for (index = 0; psd[index]; index++)
{
if (psd[index] >= (33 + diff_half2))
{
psd[index] -= diff_half2;
break;
}
}
}
printf("%s", psd);
return (0);
}
