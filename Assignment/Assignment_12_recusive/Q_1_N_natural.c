#include <stdio.h>
void first(int x);
int main()
{
    // code
    int x;

    printf("enter the number: ");
    scanf("%d", &x);

    first(x);

    return 0;
}

void first(int a)
{

    if (a > 0)
    {

        first(a - 1);

        printf("%d ", a);
    }
}