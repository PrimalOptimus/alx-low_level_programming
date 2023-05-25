#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * read_textfile -  reads text file and prints to the POSIX std output
 * @filename: name of the file
 * @letters: number of the letters
 *
 * Return: actual number of lettet
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int x = 0, y = 0, z = 0;
	char *buf;

	if (filename == NULL)
		return (0);
	x = open(filename, O_RDONLY);
	if (x == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	y = read(y, buf, letters);
	if (y == -1)
	{
		free(buf);
		return (0);
	}
	z = write(STDOUT_FILENO, buf, y);
	if (z == -1 || z != y)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(x);
	return (y);
}
