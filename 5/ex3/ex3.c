#include <stdio.h>
char h[100];
char w[100];

int perimeter;
int height;
int width;

int main(int argc, char const *argv[])
{

    printf("height: ");

    fgets(h, sizeof(h), stdin);
    sscanf(h, "%d ", &height);
    
    printf("width: ");
    fgets(w, sizeof(w), stdin);
    sscanf(w, "%d ", &width);

    // printf("height: %d \n", height );    
    // printf("width: %d \n", width );    
    perimeter = 2 * (height + width);

    printf("perimeter: %d \n", perimeter );    
    return 0;
}
