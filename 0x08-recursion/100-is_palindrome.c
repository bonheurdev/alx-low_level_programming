#include "main.h"
#include <stdio.h>
#include <string.h>


/**
 * isPalindrome - compares each character of the string.
 * @str: parameter string
 * @s: parameter start string
 * @e: parameter end string
 * Return: according to case
 */
/*Recursive helper function to check if a string is a palindrome*/
int isPalindrome(char str[], int s, int e)
{
if (s >= e)
{
/* Base case: string is a palindrome*/
return (1);
}
else if (str[s] != str[e])
{
/* Base case: string is not a palindrome*/
return (0);
}
else
{
/* Recursive case: check the next characters*/
return (isPalindrome(str, s + 1, e - 1));
}
}
/**
 * is_palindrome - detects if a string is a palindrome.
 * @s: parameter string
 * Return: if is a palindrome return 1 and 0 if not
 */
/*Main function that checks if a given string is a palindrome*/
int is_palindrome(char *s)
{
int len = strlen(s);
return (isPalindrome(s, 0, len - 1));
}
