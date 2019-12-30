#include <stdio.h>
int amt;
int cnt_25cent;
int cnt_10cent;
int cnt_5cent;
int cnt_1cent;
char line[100];

int main(int argc, char const *argv[])
{
    printf("amount of cent:");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d ", &amt);

    cnt_25cent = amt / 25;
    amt = amt - cnt_25cent * 25;
    cnt_10cent = amt / 10;
    amt = amt - cnt_10cent * 10;
    cnt_5cent = amt / 5;
    amt = amt - cnt_5cent * 5;
    cnt_1cent = amt;

    printf("cnt_25cent: %d \n", cnt_25cent);
    printf("cnt_10cent: %d \n", cnt_10cent);
    printf("cnt_5cent: %d \n", cnt_5cent);
    printf("cnt_1cent: %d \n", cnt_1cent);
    return 0;
}
