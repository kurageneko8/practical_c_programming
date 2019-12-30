/************** 
* [usage]
* convert yeard-pond to meter
*
* [example]
* convert mile to kilometer
* convert gallon to litter
* 
**************/ 

#include <stdio.h>
int mile;
float kilo;
int gallon;
float liter;
char line[100];

int main(int argc, char const *argv[])
{
    // [calc to convert] 

    // scan mile
    printf("mile:");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &mile);
    // convert mile to kilometer
    kilo = mile * 1.61;
    printf("kilo: %f\n", kilo);

    // scan gallon
    printf("gallon:");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &gallon);
    // convert gallon to liter
    liter = gallon * 3.785;
    printf("liter: %f\n", liter);

    return 0;
}

