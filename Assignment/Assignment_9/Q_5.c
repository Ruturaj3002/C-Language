#include <stdio.h>
int main()
{
    // code
    int x;

    printf("enter the number: ");

    scanf("%d", &x);

    switch (x)
    {
    case 1:

        printf("good");
        break;
    case 2:
        printf("better");
        break;

    case 3:
        printf("best");
        break;

    default:
        printf("invalid choice");
        break;
    }

    return 0;
}
