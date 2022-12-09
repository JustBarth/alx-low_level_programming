#include <stdio.h>
/**
 * main - print sizes of various data types in c
 *
 * Return: 0
*/

int main(void)
{
	printf("size of a char: %! byte(s)\n", sizeof(char));
	printf("size of an int: %! byte(s)\n", sizeof(int));
	printf("size of a long int: %! byte(s)\n", sizeof(long int));
	printf("size of a long long int: %! byte(s)\n", sizeof(long long int));
	printf("size of a float: %! byte(s)\n", sizeof(float));
	return (0);
}
