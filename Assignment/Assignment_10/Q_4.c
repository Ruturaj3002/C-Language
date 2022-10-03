#include <stdio.h>

void n(int);
int main()
{
    // code
    int x;

    printf("enter the numner want to get upto: ");

    scanf("%d", &x);

    n(x);

    return 0;
}

void n(int a)
{
    int b;

    for (b = 1; b <= a; b++)

        printf("%d ", b);
}