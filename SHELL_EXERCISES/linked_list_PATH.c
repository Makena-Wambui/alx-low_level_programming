#include <stdio.h>
#include <string.h>
#include <stdlib.h>

extern char**environ;

typedef struct node
{
	char *directory;
	struct node *next;
} Node;

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
 * retuirns a pointer to the first occurence of a character in string.
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
/*
 * now let us build a linked list of the directories in PATH.
 */
Node *builder()
{
	const char *name = "PATH";
	char *value_str;
	char *tok;

	value_str = _getenv(name);

	if (value_str != NULL)
	{
		/*initialize linked list */
		Node *head = 0;
		Node *temp = 0;
		Node *newnode;

		/*call on strtok to tokenize value_str*/
		tok = strtok(value_str, ":");
		while (tok != NULL)
		{
			/*Call on malloc to create a node for each directory*/
			newnode = malloc(sizeof(Node));
			if (newnode == NULL)
			{
				perror("Malloc failed.\n");
				exit(EXIT_FAILURE);
			}
			newnode->directory = strdup(tok);

			if (head == 0)
			{
				head = newnode;
				temp = newnode;
			}
			else
			{
				temp->next = newnode;
				temp = newnode;
			}
			/*update tok*/
			tok = strtok(NULL, ":");
		}
		return head;
	}

	return NULL;
}

void printer(Node *head)
{
	Node *temp;
	temp = head;
	while (temp != NULL)
	{
		printf("%s\n", temp->directory);
		temp = temp->next;
	}
}
void _free(Node *head)
{
	Node *ptr;
	Node *temp;
	ptr = head;
	while (ptr != NULL)
	{
		temp = ptr;
		ptr = ptr->next;
		free(temp->directory);
		free(temp);
	}
}
int main(void)
{
	Node *path;
	path = builder();

	if (path !=NULL)
	{
		printf("List of directories in PATH.\n");
		printer(path);
	}
	_free(path);
	return (0);
}
