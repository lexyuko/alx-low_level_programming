#include "main.h"

/**
 * create_file - creates a new file
 * @filename: name of file.
 * @text_content:content to be written to the file.
 *
 * Return: 1 if it succeeds, -1 if it fails.
 */


int create_file(const char *filename, char *text_content)
{
	int fname;
	int letters;
	ssize_t rwr;

	if (!filename)
		return (-1);

	fname = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fname == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	letters = 0;
	while (text_content[letters])
		letters++;

	rwr = write(fname, text_content, letters);

	if (rwr == -1)
	{
		close(fname);
		return (-1);
	}

	close(fname);

	return (1);
}
