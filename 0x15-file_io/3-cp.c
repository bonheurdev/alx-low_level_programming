#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>

#define BUF_SIZE 1024

/**
* error_exit - prints an error message and exits with the given exit code
* @code: exit code
* @msg: error message
*/
void error_exit(int code, const char *msg)
{
dprintf(STDERR_FILENO, "Error: %s\n", msg);
exit(code);
}

/**
* main - entry point of the program
* @argc: number of command line arguments
* @argv: array of command line arguments
*
* Return: 0 on success, other values on failure
*/
int main(int argc, char *argv[])
{
int fd_from, fd_to, ret;
char buf[BUF_SIZE];
ssize_t bytes_read, bytes_written;

if (argc != 3)
error_exit(97, "Usage: cp file_from file_to");

/* Open file_from in read-only mode*/
fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
error_exit(98, strerror(errno));

/* Open file_to in write-only mode with create and truncate flags*/
fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
if (fd_to == -1)
error_exit(99, strerror(errno));

/* Read from file_from and write to file_to*/
while ((bytes_read = read(fd_from, buf, BUF_SIZE)) > 0)
{
bytes_written = write(fd_to, buf, bytes_read);
if (bytes_written == -1)
error_exit(99, strerror(errno));
}

if (bytes_read == -1)
error_exit(98, strerror(errno));

/* Close file_from*/
ret = close(fd_from);
if (ret == -1)
error_exit(100, strerror(errno));

/* Close file_to*/
ret = close(fd_to);
if (ret == -1)
error_exit(100, strerror(errno));

return (0);
}
