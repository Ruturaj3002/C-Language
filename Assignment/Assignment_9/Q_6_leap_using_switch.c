#include <stdio.h>
int main()
{
    // code

    int x, z;

    printf("enter the year: ");
    scanf("%d", &x);

    z = x % 4;
    switch (z)
    {
    case (0):

        printf("%d is leap year", x);

        break;

    default:
        printf("%d is not leap year", x);
        break;
    }

    return 0;
}
