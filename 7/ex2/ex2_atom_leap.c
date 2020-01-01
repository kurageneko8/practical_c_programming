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
int older_year;
int older_month;
int older_day;
int later_year;
int later_month;
int later_day;
int tal_normal_year;
int end_days[13];
int toEndMonth_o;// days to end of the old month
int fromEndMonth2endYear_o;// days to end of the old year
int older_month_tmp;
int fromStartMonth2laterDay_l;// days to end of the old month
int fromstartMonth2startYear_l;// days to start of the later year
int later_month_tmp;
int years_gap;
int gap_years_days;
int gap_days;
int leapFlag_older;
int leapFlag_later;

int main(int argc, char const *argv[])
{    
    end_days[0] = 31;// January
    end_days[1] = 28;
    end_days[2] = 31;
    end_days[3] = 30;
    end_days[4] = 31;
    end_days[5] = 30;
    end_days[6] = 31;
    end_days[7] = 31;
    end_days[8] = 30;
    end_days[9] = 31;
    end_days[10] = 30;
    end_days[11] = 31;// December
    tal_normal_year = 365;

    leapFlag_older = 0;
    leapFlag_later = 0;
    

    printf("tell gap between 2 days\n");
    
    // input 2 days

    // older date
    printf("older date \n");
    printf("older year: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d ", &older_year);
    if (older_year % 4 == 0)
    {
        // 400で割り切れない && 100の倍数年
        if ((older_year % 400 != 0) && (older_year % 100 == 0))
        {
            /* normal */
        } else
        {
            /* leap year */
            leapFlag_older = 1;
        }
    }
    
    printf("older month: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d ", &older_month);
    
    printf("older day: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d ", &older_day);

    printf("older_date: %d/%d/%d\n", older_year, older_month, older_day);
  
    // later date
    printf("later date \n");
    printf("later year: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d ", &later_year);
    if (later_year % 4 == 0)
    {
        printf("later_year can devide by 4 \n");
        // 400で割り切れない && 100の倍数年
        if ((later_year % 400 != 0) && (later_year % 100 == 0))
        {
            printf("normal \n");
            /* normal */
        } else
        {
            /* leap year */
            printf("leap year \n");
            leapFlag_later = 1;
        }
    } 
    
    printf("later month: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d ", &later_month);
    
    printf("later day: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d ", &later_day);

    printf("later_date: %d/%d/%d\n", later_year, later_month, later_day); 

    // tell which date is later

    // about older date
    if (older_month != 2)
    {
        toEndMonth_o = end_days[older_month-1] - older_day;
    } else {
        if (leapFlag_older == 1)
        {
             toEndMonth_o = end_days[older_month-1] + 1 - older_day;
        }
        
    }
    printf("toEndMonth_o: %d\n",toEndMonth_o);

    // fromEndMonth2endYear_o = calculate days between end of the month and end of the year.
    fromEndMonth2endYear_o = 0;
    if (older_month == 12)
    {} else
    {
        older_month_tmp = older_month;
        while (older_month_tmp <= 11)
        {
            if (leapFlag_older == 1 && older_month_tmp == 1)
            {
                // leap year
                fromEndMonth2endYear_o += end_days[older_month_tmp] + 1;
            } else
            {
                fromEndMonth2endYear_o += end_days[older_month_tmp];// when older_month_tmp is Oct then look November
            }
            older_month_tmp++;
        }
    }
    printf("fromEndMonth2endYear_o: %d\n",fromEndMonth2endYear_o);

    // printf("older_year: %d\n",older_year);
    // printf("later_year: %d\n",later_year);

    // about later date
    // calculate days since beggining of the month
    fromStartMonth2laterDay_l = later_day - 1;
    printf("fromStartMonth2laterDay_l: %d\n",fromStartMonth2laterDay_l);

    // calculate days between beggining of the year and beggining of the month.  
    fromstartMonth2startYear_l = 0;
    if (later_month == 1)
    {} else
    {
        later_month_tmp = later_month -1;
        while (1 <= later_month_tmp)
        {
            later_month_tmp--;
             if (leapFlag_later == 1 && later_month_tmp == 1)
            {
                fromstartMonth2startYear_l += end_days[later_month_tmp] + 1;
            } else
            {
                fromstartMonth2startYear_l += end_days[later_month_tmp];// when later_month_tmp is 10 then look November
            }
        }
    }
    printf("fromstartMonth2startYear_l: %d\n",fromstartMonth2startYear_l);


    // calc yearses days between
    if (older_year == later_year) {
        if (older_month == later_month)
        {
            gap_days = later_day - older_day;
            printf("gap days: %d", gap_days);
            return(0);
        } else
        {
            printf("same year and different month \n");
            int later_month_tmp = later_month - 1;
            int gap_months_days = 0;
            while (older_month < later_month_tmp)
            {
                later_month_tmp--;
                printf("leapFlag_later: %d\n", leapFlag_later);
                printf("later_month_tmp: %d\n", later_month_tmp);

                if (leapFlag_later == 1 && later_month_tmp == 1)
                {
                    fromstartMonth2startYear_l += end_days[later_month_tmp] + 1;
                    end_days[later_month_tmp] = end_days[later_month_tmp] + 1;
                    gap_months_days +=  end_days[later_month_tmp];
                    printf("leap\n");
                } else
                {
                    fromstartMonth2startYear_l += end_days[later_month_tmp];
                    gap_months_days += end_days[later_month_tmp];
                    printf("not leap\n");
                }
                    gap_days = toEndMonth_o + gap_months_days + fromStartMonth2laterDay_l;
            }
            printf("toEndMonth_o: %d\n", toEndMonth_o);
            printf("gap_months_days: %d\n", gap_months_days);
            printf("fromStartMonth2laterDay_l: %d\n", fromStartMonth2laterDay_l);
            printf("gap days: %d\n", gap_days);
            return(0);
        }
    }

    // loop from later_year to older_year
    // years_gap = later_year - older_year;
    gap_years_days = 0;
    int later_year_tmp = later_year-1;
    while (older_year < later_year_tmp)
    {
        later_year_tmp--;
        if (leapFlag_later == 1 && later_month_tmp == 1)
        {
            fromstartMonth2startYear_l += end_days[later_month_tmp] + 1;
        } else
        {
            fromstartMonth2startYear_l += end_days[later_month_tmp];
        }
        gap_years_days += 365; 
    }
    

    gap_days = gap_years_days + toEndMonth_o + fromEndMonth2endYear_o + fromStartMonth2laterDay_l + fromstartMonth2startYear_l;
    printf("gap_years_days: %d\n",gap_years_days);
    printf("toEndMonth_o: %d\n",toEndMonth_o);
    printf("fromEndMonth2endYear_o: %d\n",fromEndMonth2endYear_o);
    printf("fromStartMonth2laterDay_l: %d\n",fromStartMonth2laterDay_l);
    printf("fromstartMonth2startYear_l: %d\n",fromstartMonth2startYear_l);
    printf("\n");
    printf("gap_days: %d\n",gap_days);

    return 0;
}
