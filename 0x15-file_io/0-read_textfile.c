#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters in the file
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fl;
	ssize_t rd, wr;
	char *buf;

	if (!filename)
		return (0);

	fl = open(filename, O_RDONLY);

	if (fl == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	rd = read(fl, buf, letters);
	wr = write(STDOUT_FILENO, buf, rd);

	close(fl);

	free(buf);

	return (wr);
}
