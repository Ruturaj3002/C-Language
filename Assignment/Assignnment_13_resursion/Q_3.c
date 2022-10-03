#include <stdio.h>
int squ(int);

int main()
{
    // code

    int x;
    printf("enter the number: ");
    scanf("%d", &x);

    printf("the sqaure of these number is:%d ", squ(x));

    return 0;
}

int squ(int a)
{

    if (a > 0)
    {

        return a * a + squ(a - 1);
    }
}