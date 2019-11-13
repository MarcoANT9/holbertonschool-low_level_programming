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
	if (close(file_1) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", file_1);

	if (close(file_2) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", file_2);

	exit(100);
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
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s);
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
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", s);
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
	char buf[1024];

	if (argc != 3) /** Validates the number of arguments */
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY); /** Open the file_from */
	if (file_from == -1) /** Validates the file_from exist ↑ */
		_cant_read(argv[1]);
	file_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664); /**-*/
	if (file_to == -1) /** Validates file_to creation ↑ */
		_cant_write(argv[2]);
	for (read_buf = read(file_from, buf, 1024); read_buf > 0;
	     read_buf = read(file_from, buf, 1024))
	{
		wrt_buf = write(file_to, buf, 1024); /** Tries to write */
		if (wrt_buf == -1) /** Validates the writing */
		{
			_cant_write(argv[2]); /** Exit */
		}
	}
	if (read_buf == -1)
	{
		_close_FD(file_from, file_to);
		_cant_read(argv[1]);
	}
	_close_FD(file_from, file_to); /** Cloeses files */
	return (1);
}
