#include <stdio.h>
char line[100];
int hours;
int minits;
int tal;
int main(int argc, char const *argv[])
{
    // printf("hours: ");
    // fgets(line, sizeof(line), stdin);
    // sscanf(line, "%d ", &hours);

    printf("minits: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d ", &minits);

    // printf("hours: %d\n", hours);
    // printf("minits: %d\n", minits);

    hours = minits / 60;
    minits = minits - (60 * hours);
    printf("%d hour %d minits\n", hours, minits);

    return 0;
}
