#include <stdio.h>

void retun(int);
int main()
{
    // code
    int x;

    printf("enter the number: ");

    scanf("%d", &x);

    retun(x);

    return 0;
}

void retun(int a)

{
    if (a > 0)

        printf("%d ", a);

    retun(a - 1);
}