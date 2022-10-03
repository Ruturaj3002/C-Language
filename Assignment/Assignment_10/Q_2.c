#include <stdio.h>

float simple(float, float, float);

int main()

{
    // code
    float x, y, z, a;

    printf("enter the principle amount: ");

    scanf("%f", &x);

    printf("enter the rate of intrest is: ");

    scanf("%f", &y);

    printf("enter the time period: ");

    scanf("%f", &z);

    a = simple(x, y, z);

    printf("your simple intrest is %f: ", a);

    printf("\nand the final amount is %f", a + x);

    return 0;
}

float simple(float a, float b, float c)
{

    float d;

    d = a * b * c / 100;

    return d;
}