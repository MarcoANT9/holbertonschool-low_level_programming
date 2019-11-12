#include "holberton.h"

/**
 * append_text_to_file - Appends text to the end of a file.
 *
 * @filename: Name of the file to create.
 * @text_content: Content of the file.
 *
 *
 * Description - This program takes a string with a name to create a file
 *               and another string to write its content in the new file.
 *
 * Return: → 1 on sucees.
 *         → -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int new_file, wrt, _strlen = 0;

	if (filename == NULL)
		return (-1);

	while (*(text_content + _strlen) != '\0')
		_strlen++;

	new_file = open(filename, O_WRONLY | O_APPEND);

	if (new_file < 0)
		return (-1);

	if (text_content == NULL)
		return (1);

	wrt = write(new_file, text_content, _strlen);

	if (wrt < 0)
	{
		close(new_file);
		return (-1);
	}


	close(new_file);
	return (1);

}
