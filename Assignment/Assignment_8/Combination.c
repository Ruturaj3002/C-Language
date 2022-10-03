#include <stdio.h>

int fact(int);
int main()
{
    // code

    int x, y, a, b, d;

    printf("enter the number: ");
    scanf("%d", &x);

    printf("enter another number: ");

    scanf("%d", &y);

    a = fact(x);
    b = fact(y);

    d = a /( b * (a - b));
    printf("the combination is %d", d);
    return 0;
}

int fact(int a)

{

    int c, b = 1;

    for (c = 1; c <= a; c++)
    {

        c = c * b;

        return c;
    }
}