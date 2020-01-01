#define STRING_LENGTH 80
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char name[STRING_LENGTH];

    int lookup(char const *const name);

    while (1)
    {
        printf("Enter name: ");
        fgets(name, sizeof(name), stdin);

        if (strlen(name) <= 1)
        {
            break;
        }
        name[strlen(name)-1] = '\0';

        if (lookup(name))
        {
            printf("%s is in the list\n", name);
        } else
        {
            printf("%s is not in the list\n", name);
        }
    }
    
    return 0;
}

int lookup(char const *const name)
{
    static char *list[] = {
        "John",
        "Jim",
        "Jane",
        "Clyde",
        NULL
    };

    int i;
    for ( i = 0; list[i] != NULL; i++)
    {
        if (strcmp(list[i], name) == 0)
        {
            return (1);
        }
        return(0);
    }
    
}