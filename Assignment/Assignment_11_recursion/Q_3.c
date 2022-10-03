#include <stdio.h>
int prime(int);
int main()
{
    // code

    int x, z;

    printf("enter the number: ");

    scanf("%d", &x);

    z = prime(x);

    if (z == 1)

        printf("%d is  not prime number", x);

    else
        printf("%d is prime number", x);

    return 0;
}

int prime(int a)
{

    int z;

    for (z = 2; z < a; z++)
    {

        if (a % z == 0)
        {
            z == 1;
            break;
        }
    }

    return z;
}
