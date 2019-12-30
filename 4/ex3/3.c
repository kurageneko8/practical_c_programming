#include <stdio.h>

int main(int argc, char const *argv[])
{
    float inch = 2.54;// 2.54cm
    float hor = inch * 6.8;// hor
    float ver = inch * 2.3;// ver
    // float hor = inch * 3;// hor
    // float ver = inch * 5;// ver

    printf("horizon is %f \n", hor);
    printf("vertical is %f \n", ver);
    // area
    float area = hor * ver;
    printf("area is %f \n", area);

    // periphery
    float periphery = 2 * hor + 2 * ver; 
    printf("periphery is %f \n", periphery);

    return 0;
}
