#include <stdio.h>
#include <stdlib.h>
#include "main.h"

#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>



/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: pointer to name of the file
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure.
 */

int main(int ac, char *av[])
{
	int fd, wr, len;

	/* opening*/
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1 || filename == NULL)
		return (-1);

	if (text_content != NULL)
	{

		for (len = 0; text_content[len] != '\0'; len++)
			;
	}

	/*writing*/
	wr = write(fd, text_content, len);

	if (wr == -1)
		return (-1);

	close(fd);
	return (1);
}
