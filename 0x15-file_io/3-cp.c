#include "holberton.h"
#include <stdio.h>

/**
 * _close_FD - Closes file descriptors.
 *
 * @file_1: First File.
 * @file_2: Second File.
 *
 * Return: Nothing (void).
 */
void _close_FD(int file_1, int file_2)
{
	if (file_1 != -1)
		if (close(file_1) != 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %i\n",
				file_1);

	if (file_2 != -1)
		if (close(file_2) != 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %i\n",
				file_2);
}

/**
 * _cant_read - Manages "Can't read problems".
 *
 * @s: First.
 *
 * Return: Nothing (void).
 */


void _cant_read(char *s)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
		s);
	exit(98);

}

/**
 * _cant_write - Manages "Can't read problems".
 *
 * @s: First.
 *
 * Return: Nothing (void).
 */

void _cant_write(char *s)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
		s);
	exit(99);
}

/**
 * main - Copy of cp.
 *
 * @argc: Number of arguments that enter.
 * @argv: List of arguments that enter.
 *
 *
 * Description - This program takes two files and copy the contents of the
 *               first one into the second, if the second doesn't exist, the
 *               creates it and if it exists, it gets truncated.
 *
 * Return: → 0 on sucees.
 */

int main(int argc, char **argv)
{
	int file_from, file_to, read_buf, wrt_buf;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		_cant_read(argv[1]);

	file_to = open(argv[2], O_CREAT | O_TRUNC | O_RDWR, 0664);
	if (file_to == -1)
	{
		_close_FD(file_from, file_to);
		_cant_write(argv[2]);
	}
	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
	{
		_close_FD(file_from, file_to);
		return (1);
	}
	read_buf = read(file_from, buf, 1024);
	if (read_buf == -1)
	{
		_close_FD(file_from, file_to);
		free(buf);
		_cant_read(argv[1]);
	}
	wrt_buf = write(file_to, buf, 1024);
	if (wrt_buf == -1)
	{
		_close_FD(file_from, file_to);
		_cant_write(argv[2]);
	}
	_close_FD(file_from, file_to);
	free(buf);
	return (1);
}
