#include "main.h"

/**
*append_text_to_file - this adds text to a file
*       with already existing content
*@filename: this shows the name of the file
*@text_content: this is the contents in a file
*
*Return: this returns 1 as its value
*/

int append_text_to_file(const char *filename, char *text_content)
{
        int fileop, filewrite, len = 0;

        if (filename == NULL)
                return (-1);

        if (text_content != NULL)
        {
                for (len = 0; text_content[len];)
                        len++;
        }

        fileop = open(filename, O_WRONLY | O_APPEND);
        filewrite = write(fileop, text_content, len);

        if (fileop == -1 || filewrite == -1)
                return (-1);

        close(fileop);

        return (1);
}

