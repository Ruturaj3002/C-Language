#include <stdio.h>
int largest(int arr[])
{
    int j;

    for (j = 0; j <= 9; j++)
    {
        if (arr[0] < arr[j])
        {

            arr[0] = arr[j];
        }
    }

    return arr[0];
}

int main()
{
    // code

    int i, arr[10], z;

    printf("Enter 10 the number: \n");

    for (i = 0; i <= 9; i++)
    {
        scanf("%d", &arr[i]);
    }

    largest(arr);

    printf("\nThe largest number is: \n");

    printf("%d", largest(arr));

    return 0;
}

