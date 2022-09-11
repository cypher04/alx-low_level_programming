#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This prints sizes of different types in c
 *
 * Return: always 0 (success)
 */
int main(void)
{
	printf("size of a char: %lu byte(s)\n", sizeof(char));
	printf("size of an int: %lu byte(s)\n", sizeof(int));
	printf("size of a long int: %lu byte(s)\n", sizeof(long));
	printf("size of a long long int: %lu byte(s)\n", sizeof(double));
	printf("size of a float: %lu byte(s)\n", sizeof(float));
}
