#include <stdio.h>
int count(int);
int main()
{
    // code
    int x;

    printf("enter the number: ");

    scanf("%d", &x);

    printf("the total digit in number is %d", count(x));

    return 0;
}

int count(int a)
{
   static int i = 0;

    if (a != 0)

    {
        i++;

        count(a / 10);
    }
    return i;
}