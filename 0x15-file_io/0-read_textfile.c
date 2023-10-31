#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints it to the POSIX
 * @filename: the name of the file
 * @letters: represents the numbers of letters printed.
 * Return: numbers of letters, if fails 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int a;
	ssize_t y, z;
	char *let;

	if (!filename)
		return (0);

	a = open(filename, O_RDONLY);

	if (a == -1)
		return (0);

	let = malloc(sizeof(char) * (letters));
	if (!let)
		return (0);

	y = read(a, let, letters);
	z = write(STDOUT_FILENO, let, y);

	close(a);

	free(let);

	return (z);
}
