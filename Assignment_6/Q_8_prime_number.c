#include <stdio.h>
int main()
{
    // code
    int x, i;

    printf("enter a number: ");

    scanf("%d", &i);

    for (x = 2; x < i; x++)
    {

        if (i % x == 0)
        {

            i = 1;
            break;
        }
    }

    if (i == 1)

        printf("not prime");

    else

        printf("prime");

    return 0;
}
