#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: This is the main function that prints various types on the
 * computer it is complied and run on.
 *
 * Return: 0 on success
 */
int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
