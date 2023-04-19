#include <stdlib.h>
#include <stdio.h>

/**
* print_opcodes - print the opcodes
* @a: address of the main function
* @n: number of bytes to print
* Return: void
*/

void print_opcodes(char *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", a[i]);
		if (i < n - 1)
			printf(" ");
	}
	printf("\n");
}

/**
* main - prints the opcodes of own main function
* @argc: number of arguments passed to function
* @argv: array of pointers to argument
* Return: always 0
*/

int main(int argc, char **argv)
{
	int x;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	x = atoi(argv[1]);
	if (x < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, x);
		return (0);
}
