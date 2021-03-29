#include "holberton.h"
/**
 * create_file - Entry Point
 * @filename: file name
 * @text_content: null terminated string to write
 * Return: 1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);

	if (fd == -1)
		return (-1);

	while (text_content[i])
		i++;

	if (text_content == NULL)
	{
		text_content = "";
	}
	else if ((write(fd, text_content, i)) == -1)
		return (-1);
	else
	{
		write(fd, text_content, i);
	}

	close(fd);
	return (1);
}
