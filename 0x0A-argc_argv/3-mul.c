#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - program that multiplies two numbers.
 * @argc: number of arguments
 * @argv: array with the arguments
 *atoi function from main converts string to int
 * Return: always 0
 **/

int main(int argc, char *argv[])
{
	int multiply = 0;
	char c[] = "Error";

	if (argc != 3)
	{
		printf("%s\n", c);
		return (1);
	}
	multiply = atoi(argv[1]) * atoi(argv[2]);
	printf("%i\n", multiply);
	return (0);
}
