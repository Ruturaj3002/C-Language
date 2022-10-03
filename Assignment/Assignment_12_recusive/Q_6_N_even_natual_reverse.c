#include <stdio.h>

void evenre(int);
int main()
{
    // code
    int x;

    printf("enter the number: ");
    scanf("%d", &x);

    evenre(x);

    return 0;
}

void evenre(int a)

{

    if (a >= 0)
    {
        printf("%d ", a * 2);

        evenre(a - 1);
    }
}