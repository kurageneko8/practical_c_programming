#include <stdio.h>
extern int counter;
extern void inc_counter(void);
int main(int argc, char const *argv[])
{
    int i;
    for (i = 0; i < 10; i++)
    {
        inc_counter();// !!!
    }
    printf("Counter is %d\n", counter);
    return 0;
}
