#include "holberton.h"

/**
 * read_textfile - This program reads a text file.
 *
 * @filename: Name of the file to read.
 * @letters: Number of letters it should read.
 *
 *
 * Description - This program takes a file as input and the number of letters
 *               it should read and print in the stardard output. It returns
 *               the number of letters readed by the program.
 *
 * Return: → Number of letters the program could read.
 *         → 0 if the filename is NULL or if write fails or does not write
 *           the spected ammount of bytes, or if the file cannont be opened
 *           or read.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, wrt;
	int size;

	char *buf;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY, 0222);

	if (file < 0)
		return (0);

	buf = malloc(sizeof(char) * (letters + 1));
	if (buf == NULL)
		return (0);

	size = read(file, buf, letters);

	if (size < 0)
	{
		free(buf);
		return (0);
	}

	buf[size] = '\0';

	wrt = write(1, buf, size);

	if (wrt < 0)
	{
		free(buf);
		return (0);
	}
	close(file);
	free(buf);
	return (wrt);
}
