#include <stdio.h>
#include <stdlib.h>
#include "main.h"

#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>



/**
 * create_file - Create a function that creates a file.
 * @filename: pointer to name of the file
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure, -1 if filename is NULL, if
 * text_content is NULL create an empty file
 */

/*The created file must have those permissions: rw-------.*/
/*if file exist truncate it and do not change the permissions*/
int create_file(const char *filename, char *text_content)
{
	int fd, len, wr;

	if (filename == NULL)
		return (-1);


	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	 /* opening and creating*/
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	/*writing*/

	wr = write(fd, text_content, len);
	if (wr == -1 || fd == -1)
		return (-1);

	close(fd);

	return (1);
}
