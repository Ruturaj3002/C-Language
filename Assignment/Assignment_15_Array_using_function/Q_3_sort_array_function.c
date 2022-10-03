#include <stdio.h>

void sort(int arr[])

{

    int j, i, temp;

    for (i = 0; i <= 8; i++)
    {
        for (j = i + 1; j <= 9; j++)
        {

            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\nthe sorted araay is: \n");
    
    for (i = 0; i <= 9; i++)
    {

        printf("%d ", arr[i]);
    }
}

int main()
{
    // code
    int i, j, arr[10];

    printf("Enter 10 numbers:\n ");

    for (i = 0; i <= 9; i++)
    {
        scanf("%d", &arr[i]);
    }

    sort(arr);

    return 0;
}
