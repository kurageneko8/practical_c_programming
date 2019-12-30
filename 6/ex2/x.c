#include <stdio.h>
char line[100];
int point;
int main(int argc, char const *argv[])
{
    printf("point: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d ", &point);
    // printf("point: %d\n", point);

    if (91 <= point && point <= 100 ) {
        printf("A \n");
    } 

    if (81 <= point && point <= 90 ) {
        printf("B \n");
    }

    if (71 <= point && point <= 80 ) {
        printf("C \n");

    }

    if (61 <= point && point <= 70 ) {
        printf("D \n");

    }

    if (0 <= point && point <= 60 ) {

        printf("F \n");
    }
    
    printf("End of file");
    return 0;
}
