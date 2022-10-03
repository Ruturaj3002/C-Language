#include <stdio.h>
int main()
{
    // code
    int x;

    printf("enter the even number: ");

    scanf("%d", &x);

    switch (x % 2)
    {
    case 0:

        printf("nearest odd number is %d and %d", x - 1, x + 1);

        break;

    default:

        printf("read the first statement brruuh its a odd number");

        break;
    }

    return 0;
}
