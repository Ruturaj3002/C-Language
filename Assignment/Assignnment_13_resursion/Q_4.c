#include <stdio.h>
int fact(int);
int main()
{
    // code

    int x;
    printf("enter the number: ");

    scanf("%d", &x);

    printf("the addition of digit is %d ", fact(x));

    return 0;
}

int fact(int a)
{

    if (a > 0)
    {

        return a % 10 + fact(a / 10);
    }
}