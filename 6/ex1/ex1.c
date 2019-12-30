#include <stdio.h>
#include <math.h>
int x;
int y;
char line[100];
int distance;
int distance_square;
int main(int argc, char const *argv[])
{
    printf("x:");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &x);
    
    printf("y:");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &y);

    if (x < y)
    {
        distance = y - x;
    } else
    {
        distance = x - y;
    }
    
    distance_square = distance * distance;
    printf("distance_square: %d\n", distance_square);

    float sq_root = sqrt(distance_square);
    printf("sq_root: %f\n", sq_root);
    
    return 0;
}
