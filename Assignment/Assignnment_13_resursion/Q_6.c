#include <stdio.h>

int hcf(int, int);
int main()
{
    // code
    int x, y;
    printf("enter two number: ");

    scanf("%d%d", &x, &y);

    printf("hcf of number is %d", hcf(x, y));

    return 0;
}

int hcf(int a, int b)

{
    if (b != 0)

        return hcf( b, a % b);

    else

        return a;
}