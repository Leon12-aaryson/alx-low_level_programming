#include "main.h"

/**
*create_file - function to create a file
*@filename: is the name of file to be created
*@text_content: this is the file content
*
*Return: returns -1 if file is NULL or file is
*open or when writing
*/

int create_file(const char *filename, char *text_content)
{
	int fileop, filewrite, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fileop = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	filewrite = write(fileop, text_content, len);

	if (fileop == -1 || filewrite == -1)
		return (-1);

	close(fileop);

	return (1);
}
