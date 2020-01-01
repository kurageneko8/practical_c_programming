#include <stdio.h>
int length(char string[])
{
    int static index;// for string
    for (index = 0; string[index] != '\0'; ++index)
        printf("*\n");
        printf("string[index]: %c", string[index]);
        // do nothing
    // index is local variable
    return (index);
}

int main(int argc, char const *argv[])
{
    char line[100];

    while(1) {
        printf("Enter line:");
        fgets(line, sizeof(line), stdin);

        printf("Length (including newline) is : %d\n", length(line));
    }
    return 0;
}

