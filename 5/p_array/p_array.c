#include <stdio.h>
int array[3][2];

int main(int argc, char const *argv[])
{
    int x, y;
    // need variable for array

    // int matrix[0][0] = 0 * 10 + 0;
    array[0][0] = 0 * 10 + 0;
    array[0][1] = 0 * 10 + 1;
    array[1][0] = 1 * 10 + 0;
    array[1][1] = 1 * 10 + 1;
    array[2][0] = 2 * 10 + 0;
    array[2][1] = 2 * 10 + 1;

    int zero = array[0][0];
    printf("array[%d] ", 0);
    // printf("%d ", zero);
    printf("%d ", array[0][0]);
    printf("%d ", array[0][1]);
    printf("\n");
    printf("array[%d] ", 1);
    printf("%d ", array[1][0]);
    printf("%d ", array[1][1]);
    printf("\n");
    printf("array[%d] ", 2);
    printf("%d ", array[2][0]);
    printf("%d ", array[2][1]);
    printf("\n");
    
    return 0;
}
