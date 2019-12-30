#include <stdio.h>
char line[100];
int working_hours;
int ex_hours;
int hourly_wage;
float tal_wage;

int main(int argc, char const *argv[])
{
    printf("working hours:");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &working_hours);
    if (working_hours >= 40) {
        ex_hours = working_hours - 40;
    } else
    {
        ex_hours = 0;
    }

    printf("hourly wage:");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &hourly_wage);
    float ex_wage = hourly_wage * 1.5;

    printf("ex_hours: %d\n", ex_hours);

    tal_wage = (working_hours - ex_hours) * hourly_wage;
    tal_wage = tal_wage + ex_hours * ex_wage;
    printf("total wage: %f\n", tal_wage);
    
    return 0;
}
