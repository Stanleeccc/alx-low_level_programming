#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: the name of the file
 * @text_content: contents that will be written in the file
 * Return: 1 if the file exists. -1 if the fails does not exist
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int a;
	int nl;
	int x;

	if (!filename)
		return (-1);

	a = open(filename, O_WRONLY | O_APPEND);

	if (a == -1)
		return (-1);

	if (text_content)
	{
		for (nl = 0; text_content[nl]; nl++)
			;

		x = write(a, text_content, nl);

		if (x == -1)
			return (-1);
	}

	close(a);

	return (1);
}
