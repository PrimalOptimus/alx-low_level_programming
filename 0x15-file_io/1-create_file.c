#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * create_file - create a file
 * @filename: name of the file to create
 *
 * @text_content: text to insert in the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int x = 0, y = 0, count = 0;

	if (filename == NULL)
		return (-1);
	x = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (x == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";
	while (text_content[count] != '\0')
		count++;

	y = write(y, text_content, count);
	if (y == -1)
	{
		close(x);
		return (-1);
	}
	close(x);
	return (1);
}
