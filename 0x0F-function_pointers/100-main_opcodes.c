#include<stdio.h>
#include<stdlib.h>
/**
 * main- Entry point
 *@argc: the number of parameters.
 *@argv: the parameters in the case the number of bytes.
* Return: 0 in success
*/
int main(int argc, char *argv[])
{
	int x, n;


	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (x = 0; x < n; x++)
	{
		printf("%02hhx", *((char *)main + x));
		if (x < n - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
