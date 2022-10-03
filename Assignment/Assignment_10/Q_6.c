#include <stdio.h>

int fact(int);
int main()
{
    // code
    int x, z;

    printf("enter the mumber want to know factorial: ");

    scanf("%d", &x);

    z = fact(x);
    printf("the factorial is %d", z);

    return 0;
}

int fact(int a)

{

    int x = 1, b = 1;

    for (b = 1; b <= a; b++)

    {
        x = b * x;
    }
    return x;
}