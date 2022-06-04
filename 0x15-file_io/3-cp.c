#include <stdio.h>
#include <stdlib.h>
#include "main.h"

#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>



#define SDE STDERR_FILENO

/**
 * main - copies the content of a file to another file.
 * @ac: count of arguments entered
 * @av: arguments entered
 *
 * conditions: if the number of argument is not the correct one, exit with
 * code 97 and print Usage: cp file_from file_to  on POSIX standard error
 * if file_to already exists, truncate it
 * if file_from does not exist, or if you can not read it, exit with code
 * 98 and print Error: Can't read from file NAME_OF_THE_FILE, followed by
 * a new line, on the POSIX standard error
 * Permissions of the created file: rw-rw-r--
 * if you can't write print file_to exit with 99 and print as indicated
 * must read 1,024 bytes at a time from the file_from
 *
 * Return: 0
 */

int main(int ac, char *av[])
{
	int fd_source, fd_dest, wr, rd, cl;
	char buf[1204];
	char *file_from, *file_to;

	if (ac != 3)
		dprintf(SDE, "Usage: cp file_from file_to\n"), exit(97);

	file_from = av[1];
	file_to = av[2];
	fd_source = open(av[1], O_RDONLY);
	if (fd_source == -1)
		dprintf(SDE, "Error: Can't read from file %s\n", file_from), exit(98);
	fd_dest = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_dest == -1)
		dprintf(SDE, "Error: Can't write to %s\n", file_to), exit(99);
	while (rd > 0)
	{
		rd = read(fd_source, buf, 1204);
		if (rd == -1)
		{
			dprintf(SDE, "Error: Can't read from file %s\n", file_from), exit(98);
		}
		if (rd > 0)
		{
			wr = write(fd_dest, buf, (ssize_t) rd);
			if (wr == -1)
				dprintf(SDE, "Error: Can't write to %s\n", file_to), exit(99);
		}
	}
	cl = close(fd_source);
	if (cl == -1)
		dprintf(SDE, "Error: Can't close fd %d\n", fd_source), exit(100);
	cl = close(fd_dest);
	if (cl == -1)
		dprintf(SDE, "Error: Can't close fd %d\n", fd_dest), exit(100);
	return (0);
}
