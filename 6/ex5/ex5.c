#include<stdio.h>
int year;
char line[100];

int main(int argc, char const *argv[])
{
    printf("year:");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &year);
    
    if (year % 4 == 0)
    {
        if (year % 100 == 0 && year % 400 != 0)
        {
            printf("not leap year");
        } else {
            printf("leap year");
        }

    } else {
            printf("not leap year");
    }
    
    
    return 0;
}
