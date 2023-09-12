#include "main.h"
/**
 * _islower - this function checks whether a letter is lowercase or not.
 *
 * Description: It checks whether a character, represented by its ASCII value,
 * is a small letter or not.
 *
 *@c:an int representing ASCII value of a character.
 *Return: 1 if character is small letter, 0 otherwise.
 *
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
	return (1);
else
	return (0);
}
