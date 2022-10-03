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

    int b;

    for (b = 1; b <= a; b++)
    {

        printf("%d ", b * 2 - 1);
    }
}
