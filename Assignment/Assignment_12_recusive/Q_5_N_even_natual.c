#include <stdio.h>

void even(int);
int main()
{
    // code
    int x;

    printf("enter the number: ");
    scanf("%d", &x);

    even(x);

    return 0;
}

void even(int a)
{

    if (a >= 0)
    {
        even(a - 1);

        printf("%d ", a * 2);
    }
}






