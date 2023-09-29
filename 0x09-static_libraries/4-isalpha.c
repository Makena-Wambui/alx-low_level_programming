#include "main.h"
/**
 * _isalpha - Checks for alphabetic characters.
 *
 * Description: This function will check whether a character is an alphabet.
 * @c:an int representing ASCII value of a character.
 * Return: 1 if character is an alphabetical letter, 0 otherwise.
 *
 */

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	return (1);
else
	return (0);
}
