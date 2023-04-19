#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - Prints the result of simple operations
 * @argc: number of arguments supplied to program
 * @argv: An array of pointers to arguments
 * Return: 0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int x, y;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	x = atoi(argv[1]);
	op = argv[2];
	y = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && x == 0) ||
	    (*op == '%' && y == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(x, y));

	return (0);
}
