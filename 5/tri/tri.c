#include <stdio.h>
char line[100];
int height;
int width;
int area;

int main(int argc, char const *argv[])
{
    printf("Enter width height? ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d %d", &width, &height);
    // sscanf(line, " %d ", &width);
    // sscanf(line, " %d ", &height);
    printf("The  width is %d\n", width);
    printf("The  height is %d\n", height);
    area = (width * height ) /2;
    printf("The  area is %d\n", area);
    return 0;
}
