#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
* read_textfile - reads a text file and prints it to the POSIX standard output
* @filename: name of the file to read
* @letters: number of letters to read and print
*
* Return: actual number of letters read and printed, or 0 on error
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd, bytes_read, bytes_written;
char *buffer;

if (filename == NULL) /*Check if filename is NULL*/
return (0);

buffer = malloc(letters); /*Allocate buffer of size letters*/
if (buffer == NULL) /*Check if malloc fails*/
return (0);

fd = open(filename, O_RDONLY); /* Open file in read-only mode*/
if (fd == -1) /* Check if open fails*/
{
free(buffer);
return (0);
}

bytes_read = read(fd, buffer, letters);/*Read from file into buffer*/
if (bytes_read == -1) /* Check if read fails*/
{
free(buffer);
close(fd);
return (0);
}

/* Write buffer to standard output*/
bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
/* Check if write fails or does not write expected amount of bytes*/
if (bytes_written == -1 || (size_t)bytes_written != (size_t)bytes_read)
{
free(buffer);
close(fd);
return (0);
}

free(buffer); /* Free buffer*/
close(fd); /* Close file descriptor*/
return (bytes_written); /* Return number of bytes written*/
}
