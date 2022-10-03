
#include <stdbool.h>
#include <stdio.h>

bool isPrime(int n)
{

    if (n == 1 || n == 0)
        return false;

    for (int i = 2; i < n; i++)
    {

        if (n % i == 0)
            return false;
    }

    return true;
}

int main()
{
    int n;
    printf("enter the number want to get prime number: ");

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {

        if (isPrime(i))
            printf("%d ", i);
    }

    return 0;
}
