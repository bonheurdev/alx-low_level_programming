#include <stdio.h>
#include "main.h"

/**
 * user_strlen - calculate the length of a string
 * @str: input string
 *
 * Return: length of the string
 */
size_t user_strlen(const char *str)
{
size_t len = 0;

while (str[len])
len++;

return (len);
}

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
FILE *file;
size_t text_len;

/* Check if filename is NULL */
if (filename == NULL)
return (-1);

/* Check if text_content is NULL */
if (text_content == NULL)
return (1);

/* Open the file in "append" mode */
file = fopen(filename, "a");
if (file == NULL)
return (-1);

/* Calculate the length of text_content */
text_len = 0;
while (text_content[text_len] != '\0')
{
text_len++;
}

/* Write text_content to the file */
if (fwrite(text_content, sizeof(char), text_len, file) != text_len)
{
fclose(file);
return (-1);
}

/* Close the file and return success */
fclose(file);
return (1);
}
