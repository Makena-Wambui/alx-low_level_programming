#include <stdio.h>

extern char**environ;

/*
 * we will need three functions. let us first start with custom strlen.
 * strlen will give us the bytes of the name supplied in custom getenv.
 * we will use these bytes to compare what is in name and evironment list provided
 * by global variable environ.
 */
size_t _strlen(const char *s)
{
	size_t len = 0;

	while (*s++ != '\0')
		len++;
	return (len);
}
/*
 * we also need a custom strchr.
 * returns a pointer to the first occurence of a character in string.
 * returns NULL if te character is not found 
 * we will use strchr to find =.
 */
char *_strchr( const char *s, int c)
{
	while (*s != '\0' && *s != (char)c)
		s++;
	if (*s == (char)c)
		return (char *)(s);
	else
		return (NULL);
	return (char *)(s);
}
/*Why do we need strncmp?
 * we need to compare the name given in getenv with the name in the environment list.
 * but the strings in the list are in the format var = value. so we only need to compare the entire length 
 * of the variable name provided with the variable part of the stings in the environment.
 */
int _strncmp(const char *str1, const char *str2, size_t n)
{
	size_t a;
	for (a = 0; a < n; a++)
	{
		if (str1[a] != str2[a])
			return ((int)str1[a] - str2[a]);
		if (str1[a] == '\0')
			return 0;
	}
	return 0;
}

char *_getenv(const char *name)
{
	size_t a;
	char *str;
	/*let us iterate through the environment variables pointed to by environ var*/
	for (a = 0; environ[a] != NULL; a++)
	{
		/*now we check if the current var in environ matches the name provided*/
		if (_strncmp(environ[a], name, _strlen(name)) == 0)
		{
			/*if a match has been found then call on strchr to find '='*/
			str = _strchr(environ[a], '=');
			if (str != NULL)
			{
				return (str + 1);
			}
		}
		
	}

	return (NULL);
}

int main(void)
{
	const char *name = "JAKE";
	char *str = _getenv(name);

	if (str != NULL)
	{
		printf("%s is equal to %s.\n", name, str);
	}
	else
	{
		printf("Global variable not found.\n");
	
	}
	return (0);
}
