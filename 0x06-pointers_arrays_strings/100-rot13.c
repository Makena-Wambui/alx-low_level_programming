#include "main.h"
/**
 * rot13 -this function encodes using rot 13.
 * @w : character array.
 * Return:w. (pointer to modified string).
 * w1: is all alphabetical letters.
 * w2 : is their replacements.
 * The first for loop iterates through w.
 * we check if any characters in w march those in w1.
 * if there are any then replace with those in w2.
 * use break to exit the inner loop.
 */
char *rot13(char *w)
{
	int a;
	int b;
	char *w1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *w2 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; w[a]; a++)
	{
	for (b = 0; w1[b]; b++)
	{
		if (w[a] == w1[b])
		{
		w[a] = w2[b];
		break;
		}
	}
	}
	return (w);
}

