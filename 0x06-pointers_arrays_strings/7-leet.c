#include "main.h"
/**
 * leet - this function is for encoding 1337.
 * @w: character array.
 * Return:w.(pointer to encoded string)
 * 2 for loops used to iterate through w, w1 and w2.
 * w1[] used to store chars to be replaced.
 * w2[] used to store replacements.
 * if (w[a] == w1[b]): this checks if there are any chars in w
 * that are in w1.
 * Then replaces them here:  w[a] = w2[b].
 * Then use break to exit inner loop once
 * replacement is done.
 */

char *leet(char *w)
{
	char w1[] = "aAeEoOtTlL";
	char w2[] = "4433007711";
	int a, b;

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
