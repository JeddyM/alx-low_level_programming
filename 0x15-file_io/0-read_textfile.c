#include <stdio.h>
#include <stdlib.h>
#include "main.h"

#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>



/**
 * read_textfile - function that reads a text file and prints it to
 * the POSIX standard output
 * @filename: name of the file
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print, 0 if file cannot
 * be opened or read, 0 if filename is NULL, 0 if write  fails or
 * does not write the expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd, rd, wr;

	/* opening*/
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	/* reading*/
	buf = malloc(sizeof(char) * letters);
	rd = read(fd, buf, letters);

	/*writing to standard output*/
	wr = write(STDOUT_FILENO, buf, rd);

	close(fd);
	free(buf);

	return (wr);
}
