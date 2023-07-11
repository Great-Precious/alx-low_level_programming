#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: b- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *i;
	ssize_t a;
	ssize_t b;
	ssize_t c;

	fd = open(filename, O_RDONLY);
	if (a == -1)
		return (0);
	i = malloc(sizeof(char) * letters);
	c = read(a, i, letters);
	b = write(STDOUT_FILENO, i, c);

	free(i);
	close(a);
	return (b);
}
