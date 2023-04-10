#include "main.h"

/**
*read_textfile - this function reads the tesst in a file
*@filename: represents the name of the file to be read
*@letters: this represents the letters in the file
*
*Return: returns 0 if function fails
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t store = sizeof(char) * letters;
	int fileop, fileread, filewrite;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(store);

	if (buffer == NULL)
		return (0);

	fileop = open(filename, O_RDONLY);
	fileread = read(fileop, buffer, letters);
	filewrite = write(STDOUT_FILENO, buffer, fileread);

	if (fileop == -1 || fileread == -1 || filewrite == -1 ||
	filewrite != fileread)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(fileop);

	return (filewrite);
}
