#include "main.h"

/**
 * append_text_to_file - appends new text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fname;
	int letters;
	int rwr;

	if (!filename)
		return (-1);

	fname = open(filename, O_WRONLY | O_APPEND);

	if (fname == -1)
		return (-1);

	if (text_content)
	{
		for (letters = 0; text_content[letters]; letters++)
			;

		rwr = write(fname, text_content, letters);

		if (rwr == -1)
			return (-1);
	}

	close(fname);

	return (1);
}

