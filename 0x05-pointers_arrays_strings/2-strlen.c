#include <stdio.h>
#include "main.h"
/**
* _strlen - a function thta returns length of a string.
* @s: value to be evaluated.
* Return: not
*/

int _strlen(char *s)
{
int len = 0;
while (*s != '\0')
{
	s++;
	len++;
}
return (len);
}
