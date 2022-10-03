#include <stdio.h>

int odd(int);
int main()
{
    // code

    int x;
    printf("enter the number: ");

    scanf("%d", &x);

    printf("%d", odd(x));

    return 0;
}

int odd(int a)

{

    if (a > 0)
    {

        return (a * 2 - 1 + odd(a - 1));
    }
}