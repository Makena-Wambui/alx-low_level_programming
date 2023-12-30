#include "lists.h"

unsigned long ascii(char* str) 
{	unsigned int total = 0;
	unsigned int i = 0;

	while (str[i])
	{
		printf("The ASCII value of %c is %u. \n", str[i], str[i]);
		i++;
		total += str[i];

	}
	return (total);
}
