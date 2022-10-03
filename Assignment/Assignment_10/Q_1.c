#include <stdio.h>
float area(int);

int main()
{
    // code
    float x, z;

    printf("enter the radius of circle: ");

    scanf("%f", &x);

    z = area(x);
    printf("thr area of the circle is %f", z);
    return 0;
}

float area(int a)
{

    int b;

    b = 3.14 * a * a;

    return b;
}