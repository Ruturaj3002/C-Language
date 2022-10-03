#include <stdio.h>

void swap(int *x, int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
}

int main()
{
    // code
    int first, second;

    printf("enter two numbers: ");

    scanf("%d%d", &first, &second);

    printf("the numbers before swap is\n a=%d ,b=%d ", first, second);

    swap(&first, &second);

    printf("\nthe numbers after swap is\n a=%d , b=%d ", first, second);

    return 0;
}
