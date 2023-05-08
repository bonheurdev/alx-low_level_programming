#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
* create_file - creates a file with given filename and
*writes text content to it
* @filename: name of the file to create
* @text_content: NULL terminated string to write to the file
*
* Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
int fd, bytes_written, i;

if (filename == NULL) /*Check if filename is NULL*/
return (-1);
/*Open file with write-only, create and truncate flags,*/
 /* and set file permissions to rw-------*/
fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
if (fd == -1) /* Check if open fails*/
return (-1);
/* If text_content is not NULL, write text content to the file*/
if (text_content != NULL)
{
for (i = 0; text_content[i] != '\0'; i++)
{ ; }
/* Write text_content to file*/
bytes_written = write(fd, text_content, i);
/* Check if write fails or does not write expected amount of bytes*/
if (bytes_written == -1 || bytes_written != i)
{
close(fd);
return (-1);
}
}

close(fd); /*Close file descriptor*/
return (1); /* Return success*/
}
