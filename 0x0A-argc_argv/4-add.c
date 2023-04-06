#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check - string there are digit
 * @str: array str
 * Return: 0
 */

int check_num(char *str)
{
	/*Declaring variables*/
	unsigned int x;

	x = 0;
	while (x < strlen(str)) /*count string*/

	{
		if (!isdigit(str[x])) /*check if str there are digit*/
		{
			return (0);
		}

		x++;
	}
	return (1);
}

/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 * Return: 0
 */

int main(int argc, char *argv[])

{

	/*Declaring variables*/
	int a;
	int b;
	int sum = 0;

	a = 1;
	while (a < argc) /*Goes through the whole array*/
	{
		if (check_num(argv[a]))

		{
			b = atoi(argv[a]); /*ATOI --> convert string to int*/
			sum += b;
		}

		/*Condition if one of the number contains symbols that are not digits*/
		else
		{
			printf("Error\n");
			return (1);
		}

		a++;
	}

	printf("%d\n", sum); /*print sum*/

	return (0);
}
