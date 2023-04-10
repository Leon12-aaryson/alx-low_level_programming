#ifndef FILEFUNC_H
#define FILEFUNC_H

/**
 * close_file - function written to Close file descriptors.
 * @fd: file descriptor to be closed.
 */

void close_file(int fd)
{
        int c;

        c = close(fd);

        if (c == -1)
        {
                dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
                exit(100);
        }
}

/**
*create_buffer - Allocates 1024 bytes for a buffer.
* @file: the name of the file buffer is storing chars
* Return: returns a  pointer to the buffer.
*/

char *create_buffer(char *file)
{
        char *buffer;

        buffer = malloc(sizeof(char) * 1024);

        if (buffer == NULL)
        {
                dprintf(STDERR_FILENO,
                        "Error: Can't write to %s\n", file);
                exit(99);
        }

        return (buffer);
}

#endif
