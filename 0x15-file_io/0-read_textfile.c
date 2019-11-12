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
 *         → 0 if the filename is NULL or if write fails or does not write the
 *           spected ammount of bytes, or if the file cannont be opened or
 *           read.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, wrt;
	size_t size;
	size_t counter = 0;
	char *buf = malloc(sizeof(char) * (letters));

	if (filename == NULL)
	{
		free(buf);
		return (0);
	}

	file = open(filename, O_RDONLY, 0222);

	if (file < 0)
	{
		free(buf);
		return (0);
	}

	size = read(file, buf, letters);

	buf[size] = '\0';

	while (counter < letters)
	{
		wrt = write (1, buf, 1);
		if (wrt < 0)
		{
			free(buf);
			return (0);
		}
		buf++;
		counter++;
	}

	return (counter);

}
