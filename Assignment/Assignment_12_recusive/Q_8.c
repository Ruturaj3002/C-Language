#include <stdio.h>

void bi(int x);
int main()
{
    // code
    int x;

    printf("enter the decimal number: ");

    scanf("%d", &x);

    bi(x);

    return 0;
}

void bi(int a)

{

    if (a == 0)

        return;

    bi(a /2);

    printf("%d", a % 2);
    
}