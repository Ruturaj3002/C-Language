#include <stdio.h>
int main()
{
    // code
    int no1, no2, *ptr1, *ptr2;

    printf("enter first number: ");

    scanf("%d", &no1);

    printf("\nenter second number: ");

    scanf("%d", &no2);

    ptr1 = &no1;

    ptr2 = &no2;

    if (*ptr1 > *ptr2)

        printf("\nthe largest number is: %d", *ptr1);

    else

        printf("\nthe largest number is: %d", *ptr2);

    return 0;
}
