#include <stdio.h>

/**
 * main - prints all sinle digit numbers of base 10 starting from o,
 * only using putchar and without char variables.
 *
 * Return: 0
*/
int main(void);
{
	int num;

	for (num = 0 < 10; num++)
		putchar((num % 10) + '0'0);

	putchar('\n');

	return (0);
}
