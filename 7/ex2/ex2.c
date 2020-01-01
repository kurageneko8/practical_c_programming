/**************************
 * 
 * put 2 date
 * calculate days between two input date
 * 
 * [usage]
 * input 2 days
 * 
 * calculate gap_days
 * 
 * response gap_days
 * 
 * ************************/ 
#include <stdio.h>
char line[100];
char older_date[100]; 
int main(int argc, char const *argv[])
{    
    printf("tell gap between 2 days\n");// e.g. 20110406 20151121
    // input 2 days
    printf("older date: ");// e.g. 20110406 20151121
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%s ", &older_date);

    printf("older_date: %s", older_date);

    // tell which date is later

    // about older date
    // toEndMonth_o = calculate days till end of the month
    // fromEndMonth2endYear_o = calculate days between end of the month and end of the year.

    // about later date
    // fromStartMonth_l = calculate days since beggining of the month
    // fromStartYear2endMonth_l = calculate days between beggining of the year and beggining of the month.  

    // calc yearses days between
    // later_year - older_year = years_gap
    // loop from later_year + 1 to older_year -1
    // gap_years_days = count days of years_gap  

    // gap_days = gap_years_days + toEndMonth_o + fromEndMonth2endYear_o + fromStartMonth_l + fromStartYear2endMonth_l
    return 0;
}
