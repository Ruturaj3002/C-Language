#include <stdio.h>

void odd(int);
int main()
{
    // code
    int x;
    printf("enter the number: ");

    scanf("%d", &x);

    odd(x);

    return 0;
}

void odd(int a)
{

    if (a > 0)
    {
        printf("%d ", 2 * a - 1);

        odd(a - 1);
    }
}