#include "main.h"
/**
 * _islalpha - this function checks for alphabetic characters.
 *
 * Description: It checks whether a character, represented by its ASCII value,
 * is an alphabetical letter.
 *
 *@c:an int representing ASCII value of a character.
 *Return: 1 if character is an alphabetical letter, 0 otherwise.
 *
 */

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return (1);
else
        return (0);
}
