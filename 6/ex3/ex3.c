#include <stdio.h>
char line[100];
int point;
int ones_place;

int main(int argc, char const *argv[])
{
    printf("point: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d ", &point);
    // printf("point: %d\n", point);
    ones_place = point - 10 * (point / 10);
    // printf("ones_place: %d\n", ones_place);

    if (91 <= point && point <= 100 ) {
        printf("A");
    } 

    if (81 <= point && point <= 90 ) {
        printf("B");
    }

    if (71 <= point && point <= 80 ) {
        printf("C");

    }

    if (61 <= point && point <= 70 ) {
        printf("D");

    }

    if (0 <= point && point <= 60 ) {

        printf("F");
    }

    if (1 <= ones_place && ones_place <= 3)
    {
        printf("-");
    }

    if (4 <= ones_place && ones_place <= 7)
    {
        printf("");
    }

    if (8 <= ones_place && ones_place <= 9 || ones_place == 0)
    {
        printf("+");
    }
    
    
    return 0;
}
