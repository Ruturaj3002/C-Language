#include <stdio.h>
int main()
{
    // code
    int i, arr[10];

    printf("enter 10 numbers: ");

    for (i = 0; i <= 9; i++)

    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i <= 9; i++)
    {
        if (arr[0] < arr[i])
        {
            arr[0] = arr[i];
        }
    }
    printf("the greatest number is %d", arr[0]);
    return 0;
}
