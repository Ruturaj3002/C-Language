#include <stdio.h>

int bi(int);
int main()
{
    // code
    int x;

    printf("enter the decimal number: ");

    scanf("%d", &x);

    printf("the binary number is %d", bi(x));

    return 0;
}

int bi(int a)

{

    if (a == 0)

        return 0;

    else

        return (a % 2 + 10 * bi(a / 2));
}