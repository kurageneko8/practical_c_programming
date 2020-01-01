#include <stdio.h>
#include <stdlib.h>
char file_name[100];
int main(int argc, char const *argv[])
{
    char name[100];
    FILE *in_file;

    printf("Name? ");
    fgets(name, sizeof(name), stdin);
    sscanf(name, "%s", &file_name);

    // printf("sizeof(name): %d", sizeof(name));

    int size = sizeof(file_name);
    for (int i = 0; i < size; i++)
    {
        printf("%c\n", file_name[i]);
    }
    

    // in_file = fopen(name, "r");
    in_file = fopen(file_name, "r");
    if (in_file == NULL)
    {
        fprintf(stderr, "Could not open file\n");
        exit(8);
    }
    printf("File found\n");
    fclose(in_file);
    return 0;
}
