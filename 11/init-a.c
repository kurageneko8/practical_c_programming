#include <stdio.h>
#define MAX 10
void init_array_1(int data[]) 
{
    int i;
    for (i = 0; i < MAX; ++i)
    {
        data[i] = 0;
    }
}

void init_array_2(int *data_ptr) 
{
    int i;
    for (i = 0; i < MAX; ++i)
    {
        *(data_ptr + i) = 0;
    }
}

int main(int argc, char const *argv[])
{
    /* code */
    int array[MAX];

    void init_array_1();
    void init_array_2();

    // init_array_1(array);
    // init_array_1(&array[0]);
    // init_array_1(&array);
    init_array_2(array);

    // debug
    int i;
    for (i = 0; i < MAX; ++i)
    {
        printf("array[i]: %d\n",array[i]);
    }
    
    return 0;
}
