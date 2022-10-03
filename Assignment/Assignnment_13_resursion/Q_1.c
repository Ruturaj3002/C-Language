#include <stdio.h>
int first(int x);
int main()
{
    // code
    int x;

    printf("enter the number: ");
    scanf("%d", &x);

    printf("%d", first(x));
    return 0;
}

int first(int a)
{

    if (a > 0)
    {

        return a + first(a - 1);
    }
}