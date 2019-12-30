#include <stdio.h>
char line[100];
float radius;
float volume; 

int main(int argc, char const *argv[])
{
    printf("input radius: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%f ", &radius);
    printf("radius: %f\n", radius);
    volume = 4.0 / 3.0 * 3.14 * radius * radius * radius;

    // float ninedev5 = 9.0 / 5;
    // printf(" 9.0 / 5 : %f\n", ninedev5);
    // printf("9.0 / 5 * radius: %f\n", ninedev5 * radius);
    printf("volume of sphere: %f\n", volume);


    return 0;
}
