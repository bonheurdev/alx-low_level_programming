#include "main.h"
#include <stdio.h>

/**
 * wildcmp - compares two strings s1 and s2, where s2 may
 * contain wildcardcharacters represented by '*'
 *
 * @s1: the first string to compare
 * @s2: the second string to compare
 *
 * Return: 1 if the two strings match, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
/* If s2 contains a '*' character, and the next character is not the end of */
/* the string, and s1 is already at the end of the string, then we know that */
/* s1 and s2 cannot match, so we return 0 */
if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
return (0);

/* If both s1 and s2 are at the end of their respective strings, then we */
/* know that the two strings match, so we return 1 */
if (*s1 == '\0' && *s2 == '\0')
return (1);

/* If the current characters of s1 and s2 match, we recursively call */
/* wildcmp() with the next characters of s1 and s2 */
if (*s1 == *s2)
return (wildcmp(s1 + 1, s2 + 1));

/* If s2 contains a '*' character, we can either skip over the '*' in s2 */
/* and continue comparing s1 with the next character of s2, or we can */
/* skip over the current character of s1 and continue comparing the */
/* remaining characters of s1 with s2 */
if (*s2 == '*')
return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));

 /* If none of the previous conditions apply, then we know that s1 and s2 */
/* do not match, so we return 0 */
return (0);
}
