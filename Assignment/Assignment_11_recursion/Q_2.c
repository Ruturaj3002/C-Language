#include <stdio.h>
int f1(int, int);

int main()
{
    // code
    int x, y, z;

    printf("enter two number: ");
    scanf("%d%d",&x,&y);

    z = f1(x, y);

    printf("HCF is %d", z);

    return 0;
}

int f1(int a, int b)
{
    int c, d;

    for (c = 1; c <= a * b; c++)
    {

        if (c % a == 0 && c % b == 0)

        {

            break;
        }
    }
    d = a * b / c;
    return d;
}
