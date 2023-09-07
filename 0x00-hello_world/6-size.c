#include <stdio.h>
/**
 *main - Entry point of the program
 *
 *Description:This function is the entry point of the program
 *It prints the sizes of data types on std output
 *
 *This function takes no arguments and returns an integer exit status
 *Return: Always 0 (on success)
 */
int main(void)
{
char a;
int i;
long h;

printf("Size of a char: %lu byte(s)\n", sizeof(a));
printf("Size of an int: %lu byte(s)\n", sizeof(i));
printf("Size of a long int: %lu byte(s)\n", sizeof(h));
printf("Size of a long long int: %llu byte(s)\n", (long long int)sizeof(h));
printf("Size of a float: %.0f byte(s)\n", (float)sizeof(i));
return (0);
}
