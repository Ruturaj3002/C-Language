#include <stdio.h>

void dupliate(int arr[], int n)
{

    int i, j, count = 0;

    for (i = 0; i < n; i++)
    {

        for (j = i; j < n; j++)
        {

            if (arr[i] == arr[j])
            {

                count++;
                break;
            }
        }
    }

    printf("\n\nthe total number duplicate in array is\n%d", count);
}

int main()
{
    // code
    int i, arr[100], n;

    printf("enter the total number in array: ");

    scanf("%d", &n);

    printf("Enter the number in array: ");

    for (i = 0; i < n; i++)
    {

        scanf("%d", &arr[i]);
    }

    printf("\nthe element in array is: \n\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    dupliate(arr, n);

    return 0;
}
