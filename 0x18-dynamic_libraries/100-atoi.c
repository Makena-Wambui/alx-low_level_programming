#include "main.h"
/**
 * _atoi - converts a string to an int.
 * @s : character array.
 * @*s : pointer variable.
 *
 * Return: integer.
 */

int _atoi(char *s)
{
	int num = 0; /*Iinitialize to 0*/
	int sign = 1; /* Initialize the sign to positive */
	int ind = 0; /* Initialize index to 0 */

	/**
	 * Check for whitespace or characters in the range of
	 * ascii values '9' to '13'. That is \t,\n, \v,\f,\r.
	 * And skip them
	 */

	while (s[ind] == ' ' || (s[ind] >= 9 && s[ind] <= 13))
	{
		ind++;
	}

	/**Handling the sign */
	if (s[ind] == '-' || s[ind] == '+')
	{
	if (s[ind] == '-')
	{
		sign = -1;
	}
	ind++;
	}

	/*Shaping the integer */
	while (s[ind] >= '0' && s[ind] <= '9')
	{
	num = num * 10 + (s[ind] - '0');
	ind++;
	}

	/* Applying sign */
	num = num * sign;
	return (num);
}
