
#include <stdio.h>
unsigned int factorial(unsigned int n);
int main()
{
    int x;
    printf("enter the nunmber: ");
    scanf("%d", &x);

    printf("Factorial of %d is %d", x, factorial(x));
    return 0;
}

unsigned int factorial(unsigned int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}
