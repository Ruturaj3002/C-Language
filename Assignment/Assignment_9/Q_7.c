#include <stdio.h>
int main()
{
    // code
    float x, z;

    printf("enter the number of units: ");
    scanf("%d", &x);

    switch (x < 50)
    {
    case 1:

        z = x * 0.05;

        printf("your bill is %f",z);
        break;
    }

    switch (x < 100)
    {
    case 1:
        z = x * 0.75;

        printf("your bill is %f",z);

        break;
    }

    switch (x > 200)
    {
    case 1:

        z = x * 1.20;

        printf("your bill is %f",z);

        break;
    }
    switch (x < 250)
    {
    case 1:
        z = x * 1.50;

        printf("your bill is %f",z);

        break;

    default:
        printf("enter proper unit value");
    }

    return 0;
}
