#include <stdio.h>
void ascii(void)
{
	int i = 0;
	while (i < 256)
	{
		printf("Character: %c Value: %d\n", (char)i, i);
		i++;
	}
}
int main(void)
{
	ascii();
	return (0);
}
