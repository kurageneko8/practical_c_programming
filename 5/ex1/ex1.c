#include <stdio.h>
char line[100];
float celsius;
float fahrenheit; 

int main(int argc, char const *argv[])
{
    printf("input temprature with Celcius");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%f ", &celsius);
    printf(" temprature with Celcius: %f\n", celsius);
    fahrenheit = 9.0 / 5 * celsius + 32;

    float ninedev5 = 9.0 / 5;
    printf(" 9.0 / 5 : %f\n", ninedev5);
    printf("9.0 / 5 * celsius: %f\n", ninedev5 * celsius);
    printf(" temprature with fahrenheit: %f\n", fahrenheit);


    return 0;
}
