#include <stdio.h>

int fab(int);
int main()
{
    // code
    int x;

    printf("enter the number: ");

    scanf("%d", &x);

    printf("the fabonic number is %d",fab(x));

    return 0;
}

int fab(int a)
{

    if (a <= 1)

    return a;

        return fab(a - 1) + fab(a - 2);
    
}