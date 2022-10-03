#include <stdio.h>
int main()
{
    // code
    int x;

    printf("enter a number: ");

    scanf("%d", &x);

    switch (x > 0)
    {
    case 1:
        printf("the neagative is %d", x * -1);
        break;
    }

    switch (x < 0)
    {
    case 1:

        printf("the posotive is %d", x * -1);

        break;

    default:

        printf("invalid number enter");
        break;
    }

    return 0;
}
