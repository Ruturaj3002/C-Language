#include <stdio.h>

int even(int);
int main()
{
    // code
    int x, z;

    printf("enter the number: ");

    scanf("%d", &x);

    z = even(x);
    if (z == 1)

        printf("even return 1");

    else

        printf("odd return 0");

    return 0;
}

int even(int a)

{

    if (a % 2 == 0)

        return 1;

    else

        return 0;
}