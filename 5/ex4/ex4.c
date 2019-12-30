#include <stdio.h>
char line[100];
int miles_perHour; 
int main(int argc, char const *argv[])
{

    printf("miles_perHour: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d ", &miles_perHour);
    float kilo_perHour = miles_perHour / 0.6213712;
    // float check = miles_perHour * 0.6213712;
    printf("kilo_perHour: %f ", kilo_perHour);

    return 0;
}
