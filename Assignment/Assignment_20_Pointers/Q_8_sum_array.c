#include <stdio.h>

static void add(int a);

int main()
{
    // code
    int i, arr[10], sum = 0;

    printf("enter 10 numbers: ");

    for (i = 0; i <= 9; i++)
    {

        scanf("%d", &arr[i]);

        sum = sum + *(arr + i);
    }

    printf("the sum is %d", sum);

    return 0;
}
